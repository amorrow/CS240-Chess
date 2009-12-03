/* Game
 * Implements a complete chess game.
 */

#include "Game.h"

#include <string>
#include <glib.h>

using namespace std;

// Defines
string ChessStatusMessageWhitesTurn = "White's Turn";
string ChessStatusMessageBlacksTurn = "Black's Turn";
string ChessStatusMessageWhiteInCheck = "White's Turn (In Check)";
string ChessStatusMessageBlackInCheck = "Black's Turn (In Check)";
string ChessStatusMessageWhiteWins = "Black In Checkmate (White Wins)";
string ChessStatusMessageBlackWins = "White In Checkmate (Black Wins)";
string ChessStatusMessageStalemate = "Stalemate!";

// Using pseudo-code, since I don't yet know the API of the XML library
// I'm planning to use.
void Game::load(string path)
{
	/*
	clear();
	xmldoc doc(path);
	xmldoc::iterator pieces = doc.select("XPath selector to find piece nodes");
	for (; pieces != doc.end(); pieces++)
	{
		_board.insertPiece(Location(pieces->row, pieces->col), Piece(pieces->type));
	}
	xmldoc::iterator moves = doc.select("XPath selector to find move nodes");
	for (; moves != doc.end(); moves++)
	{
		Move move(Piece(moves->type), Location(moves->oldRow, moves->oldCol), Location(moves->newRow, moves->newCol));
		if (moves->taken)
		{
			move.take(Piece(moves->taken));
		}
		_history.push_back(move);
	}
	*/
}

// Using pseudo-code, since I don't yet know the API of the XML library
// I'm planning to use.
void Game::save(string path)
{
	/*
	xmldocwriter doc(path);
	
	doc.beginHistoryTag();
	set<Move>::iterator moveIter = _history.begin();
	for (; moveIter != _history.end(); moveIter++)
	{
		doc.write(*moveIter);
	}
	doc.endHistoryTag();
	
	
	doc.beginBoardTag();
	for (int row = 0; row < NUM_ROWS; row++)
	{
		for (int col = 0; col < NUM_COLS; col++)
		{
			doc.write(_board.at(Location(row, col)));
		}
	}
	doc.endBoardTag();
	doc.write();
	*/
}

void Game::startNew()
{
	clear();
	_board.placeDefaultPieces();
}

void Game::clear()
{
	_status = ChessGameStatusWhitesTurn;
	_history.clear();
	_message = ChessStatusMessageWhitesTurn;
	_board.clear();
}

ChessGameStatus Game::status() const
{
	return _status;
}

string Game::message() const
{
	return _message;
}

Board& Game::board()
{
	return _board;
}

// Returns true if a valid move was made.
// False if the move requested cannot be performed.
bool Game::makeMove(Location oldLoc, Location newLoc)
{
	g_debug("Game::makeMove starting with piece at %d,%d...",oldLoc.row(),oldLoc.column());
	// determine if there is a piece at the specified location
	if (!_board.hasPieceAt(oldLoc))
	{
		g_debug("Game::makeMove did not find a piece to move.");
		return false;
	}
	PiecePtr pieceToMove = _board.at(oldLoc);
	
	Move move(pieceToMove, oldLoc, newLoc);
	// check to see if it belongs to the right player
	if (!belongsToCurrentPlayer(pieceToMove))
	{
		g_debug("Game::makeMove asked to move the other player's piece!");
		return false;
	}
	// determine if the new location is a valid move
	set<Location> valid = _board.movesToEscapeCheck(oldLoc);
	set<Location>::iterator locIter = valid.find(newLoc);
	if (locIter == valid.end()) // the suggested move was not found in the set of valid ones
	{
		g_debug("Game::makeMove asked to move to an invalid spot!");
		return false;
	}
	// determine if there's a piece in the new location
	if (_board.hasPieceAt(newLoc))
	{
		PiecePtr pieceToTake = _board.at(newLoc);
		if (belongsToCurrentPlayer(pieceToTake))
		{
			g_debug("Game::makeMove asked to take the player's own piece!");
			return false;
		}
		else // belongs to the other guy, take it
		{
			move.take(pieceToTake);
			g_debug("Game::makeMove taking an enemy piece...");
		}
	}
	// add the move object to history
	_history.push_back(move);
	// perform the move
	_board.movePiece(oldLoc, newLoc);
	// change the game status
	updateGameStatus();
	return true;
}

// Returns true if a move was undone.
// Returns false if there are no more moves to undo.
bool Game::undoMove()
{
	if (_history.empty())
	{
		return false;
	}
	Move last = _history.back();
	_history.pop_back();
	_board.movePiece(last.newLocation(), last.oldLocation());
	if (last.pieceTaken() != NULL)
	{
		_board.insertPiece(last.newLocation(), last.pieceTaken());
	}
	// This ought to work. Frankly, I'm not completely positive,
	// but it seems to function properly. Check here for bugs, though.
	updateGameStatus();
	return true;
}

// Returns a set of the locations of interest to allow whatever frontend
// we're using to redraw.
set<Location> Game::locationsChangedByLastMove() const
{
	set<Location> locs;
	if (_history.empty())
	{
		return locs; // empty set
	}
	Move m = _history.back();
	locs.insert(m.oldLocation());
	locs.insert(m.newLocation());
	return locs;
}

void Game::updateGameStatus()
{
	if (_board.stalemate())
	{
		_status = ChessGameStatusStalemate;
		_message = ChessStatusMessageStalemate;
	}
	// flip whose turn it is
	else if (_status == ChessGameStatusWhitesTurn)
	{
		if (_board.blackInCheckmate())
		{
			_status = ChessGameStatusWhiteWins;
			_message = ChessStatusMessageWhiteWins;
		}
		else
		{
			if (_board.blackInCheck())
				_message = ChessStatusMessageBlackInCheck;
			else
				_message = ChessStatusMessageBlacksTurn;
			_status = ChessGameStatusBlacksTurn;
		}
	}
	else
	{
		if (_board.whiteInCheckmate())
		{
			_status = ChessGameStatusBlackWins;
			_message = ChessStatusMessageBlackWins;
		}
		else
		{
			_status = ChessGameStatusWhitesTurn;
			if (_board.whiteInCheck())
				_message = ChessStatusMessageWhiteInCheck;
			else
				_message = ChessStatusMessageWhitesTurn;
		}
	}
}

bool Game::belongsToCurrentPlayer(PiecePtr p)
{
	if (p->color() == ChessColorWhite && _status == ChessGameStatusWhitesTurn)
		return true;
	if (p->color() == ChessColorBlack && _status == ChessGameStatusBlacksTurn)
		return true;
	return false;
}

bool Game::currentPlayerInCheck()
{
	return _board.playerInCheck((_status == ChessGameStatusWhitesTurn ? ChessColorWhite : ChessColorBlack));
}


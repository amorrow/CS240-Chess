/* Game
 * Implements a complete chess game.
 */

#include "Game.h"
#include "ChessDocParser.h"

#include <string>
#include <fstream>
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

void Game::load(string path)
{
	clear();

	ChessDocParser parser(*this);
	ParseContext context(parser);
	ifstream inFile(path.c_str());
	inFile.exceptions(ifstream::badbit);
	if (inFile.fail())
	{
		g_warning("Could not open file!");
		throw ifstream::failure("couldn't open file!");
	}
	char buffer[1024];
	try
	{
		while (!inFile.eof())
		{
			inFile.read(buffer, 1024);
			context.parse(buffer, buffer + inFile.gcount());
		}
	}
	catch (Glib::Error& err)
	{
		g_warning("Could not open file!");
		g_warning("Message: %s", err.what().c_str());
	}
	// now update the game status
	updateGameStatus();
}

void Game::save(string path)
{
	ofstream outFile(path.c_str());
	outFile.exceptions(ofstream::badbit);
	outFile << "<chessgame>";
	outFile << "<board>";
	for (int row = 0; row < BOARD_NUM_ROWS; row++)
	{
		for (int col = 0; col < BOARD_NUM_COLS; col++)
		{
			Location loc(row, col);
			if (_board.at(loc) != NULL)
				outFile << pieceTag(_board.at(loc), loc);
		}
	}
	outFile << "</board>";
	outFile << "<history>";
	for (
		list<Move>::const_iterator moveIter = _history.begin();
		moveIter != _history.end();
		moveIter++)
	{
		outFile << "<move>";
		outFile << pieceTag(moveIter->piece(), moveIter->oldLocation());
		outFile << pieceTag(moveIter->piece(), moveIter->newLocation());
		if (moveIter->pieceTaken() != NULL)
			outFile << pieceTag(moveIter->pieceTaken(), moveIter->newLocation());
		outFile << "</move>";
	}
	outFile << "</history>";
	outFile << "</chessgame>";
}

// Returns a string with the XML tag for a piece in it.
string Game::pieceTag(PiecePtr piece, Location loc)
{
	stringstream strs;
	string color = (piece->color() == ChessColorWhite ? "white" : "black");
	string type;
	switch(piece->type())
	{
		case ChessPieceTypePawn:
			type = "pawn";
			break;
		case ChessPieceTypeRook:
			type = "rook";
			break;
		case ChessPieceTypeKnight:
			type = "knight";
			break;
		case ChessPieceTypeBishop:
			type = "bishop";
			break;
		case ChessPieceTypeQueen:
			type = "queen";
			break;
		case ChessPieceTypeKing:
			type = "king";
			break;
		case ChessPieceTypeNoPiece:
			assert(false);
	}

	strs << "<piece type=\"" << type;
	strs << "\" color=\"" << color;
	strs << "\" row=\"" << loc.row();
	strs << "\" column = \"" << loc.column() << "\" />";
	return strs.str();
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
	// flip the turn
	flipTurns();
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
	flipTurns();
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

void Game::flipTurns()
{
	if (_status == ChessGameStatusWhitesTurn)
	{
		if (_board.blackInCheck())
			_message = ChessStatusMessageBlackInCheck;
		else
			_message = ChessStatusMessageBlacksTurn;
		_status = ChessGameStatusBlacksTurn;
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

void Game::updateGameStatus()
{
	if (_status == ChessGameStatusWhitesTurn && _board.blackInCheckmate())
	{
		_status = ChessGameStatusWhiteWins;
		_message = ChessStatusMessageWhiteWins;
	}
	else if (_status == ChessGameStatusBlacksTurn && _board.whiteInCheckmate())
	{
		_status = ChessGameStatusBlackWins;
		_message = ChessStatusMessageBlackWins;
	}
	else if (_board.stalemate())
	{
		_status = ChessGameStatusStalemate;
		_message = ChessStatusMessageStalemate;
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
	return _board.playerInCheck(
			(_status == ChessGameStatusWhitesTurn ? ChessColorWhite : ChessColorBlack)
	);
}

void Game::addToHistory(Move move)
{
	_history.push_back(move);
}

void Game::setCurrentPlayer(ChessColor color)
{
	if (color == ChessColorWhite)
		_status = ChessGameStatusWhitesTurn;
	else
		_status = ChessGameStatusBlacksTurn;
}


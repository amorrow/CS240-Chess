/* Board
 * Implements a chess board.
 */

#include "Board.h"

using namespace std;

Board::Board()
{}

Board::~Board()
{}

Piece Board::at(Location loc)
{
	if (loc.isValid())
	{
		return board[loc];
	}
	else
	{
		return Piece();
	}
}

ChessPieceType Board::typeAt(Location loc)
{
	return this->at(loc).type();
}

bool Board::hasPieceAt(Location loc)
{
	if (loc.isValid())
	{
		return this->typeAt(loc) != ChessPieceTypeNoPiece;
	}
	else
	{
		return false;
	}
}

void Board::movePiece(Location oldLoc, Location newLoc)
{
	Piece toMove = this->at(oldLoc);
	Piece blank;

	board.erase(newLoc);
	board.insert(make_pair(newLoc, toMove));
	board.erase(oldLoc);
	board.insert(make_pair(oldLoc, blank));
}

void Board::insertPiece(Location loc, Piece p)
{
	board.erase(loc);
	board.insert(make_pair(loc, p));
}

void Board::clear()
{
	board.clear();
	// TODO iterate over all possible locations
	// and insert a blank piece there
}

void Board::placeDefaultPieces()
{
	this->clear();
	// TODO place pieces
}

bool Board::stalemate()
{
	return false;
}

bool Board::whiteInCheck()
{
	return false;
}

bool Board::blackInCheck()
{
	return false;
}

bool Board::whiteInCheckmate()
{
	return false;
}

bool Board::blackInCheckmate()
{
	return false;
}


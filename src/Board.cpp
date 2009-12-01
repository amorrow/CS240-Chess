/* Board
 * Implements a chess board.
 */

#include "Board.h"

using namespace std;

Board::Board() : board(NULL)
{
	board = new Piece*[BOARD_NUM_ROWS];
	for (int i = 0; i < BOARD_NUM_ROWS; i++)
	{
		board[i] = new Piece[BOARD_NUM_COLS];
	}
}

Board::~Board()
{
	for (int i = 0; i < BOARD_NUM_ROWS; i++)
	{
		delete [] board[i];
		board[i] = NULL;
	}
	delete [] board;
}

Piece Board::at(Location loc)
{
	if (loc.isValid())
	{
		return board[loc.row()][loc.column()];
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

	board[newLoc.row()][newLoc.column()] = toMove;
	board[oldLoc.row()][oldLoc.column()] = blank;
}

void Board::insertPiece(Location loc, Piece p)
{
	board[loc.row()][loc.column()] = p;
}

void Board::clear()
{
	for (int row = 0; row < BOARD_NUM_ROWS; row++)
	{
		for (int col = 0; col < BOARD_NUM_COLS; col++)
		{
			board[row][col] = Piece();
		}
	}
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


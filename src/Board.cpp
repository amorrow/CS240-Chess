/* Board
 * Implements a chess board.
 */

#include "Board.h"

// Pieces
#include "Rook.h"

using namespace std;

Board::Board() : board(NULL)
{
	board = new PiecePtr*[BOARD_NUM_ROWS];
	for (int i = 0; i < BOARD_NUM_ROWS; i++)
	{
		board[i] = new PiecePtr[BOARD_NUM_COLS];
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

PiecePtr Board::at(Location loc)
{
	if (loc.isValid())
	{
		return board[loc.row()][loc.column()];
	}
	else
	{
		PiecePtr ptr;
		return ptr;
	}
}

ChessPieceType Board::typeAt(Location loc)
{
	return this->at(loc)->type();
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
	PiecePtr toMove = this->at(oldLoc);
	PiecePtr blank;

	board[newLoc.row()][newLoc.column()] = toMove;
	board[oldLoc.row()][oldLoc.column()] = blank;
}

void Board::insertPiece(Location loc, PiecePtr p)
{
	board[loc.row()][loc.column()] = p;
}

void Board::clear()
{
	for (int row = 0; row < BOARD_NUM_ROWS; row++)
	{
		for (int col = 0; col < BOARD_NUM_COLS; col++)
		{
			PiecePtr ptr;
			board[row][col] = ptr;
		}
	}
}

void Board::placeDefaultPieces()
{
	this->clear();
	// TODO place pieces
	PiecePtr ptr(new Rook(ChessColorWhite));
	board[0][0] = ptr;
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


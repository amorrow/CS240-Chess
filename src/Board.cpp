/* Board
 * Implements a chess board.
 */

#include "Board.h"

// Pieces
#include "Rook.h"
#include "Pawn.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"

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
	PiecePtr p = this->at(loc);
	if (p != NULL)
	{
		return p->type();
	}
	else
	{
		return ChessPieceTypeNoPiece;
	}
}

// Precondition: there is a piece at the location
ChessColor Board::colorAt(Location loc)
{
	return this->at(loc)->color();
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
	PiecePtr ptr;
	// Rooks
	ptr = PiecePtr(new Rook(ChessColorWhite));
	board[7][7] = ptr;
	board[7][0] = ptr;
	ptr = PiecePtr(new Rook(ChessColorBlack));
	board[0][0] = ptr;
	board[0][7] = ptr;
	// Knights
	ptr = PiecePtr(new Knight(ChessColorWhite));
	board[7][6] = ptr;
	board[7][1] = ptr;
	ptr = PiecePtr(new Knight(ChessColorBlack));
	board[0][6] = ptr;
	board[0][1] = ptr;
	// Bishops
	ptr = PiecePtr(new Bishop(ChessColorWhite));
	board[7][5] = ptr;
	board[7][2] = ptr;
	ptr = PiecePtr(new Bishop(ChessColorBlack));
	board[0][5] = ptr;
	board[0][2] = ptr;
	// Queens
	ptr = PiecePtr(new Queen(ChessColorWhite));
	board[7][3] = ptr;
	ptr = PiecePtr(new Queen(ChessColorBlack));
	board[0][4] = ptr;
	// Kings
	ptr = PiecePtr(new King(ChessColorWhite));
	board[7][4] = ptr;
	ptr = PiecePtr(new King(ChessColorBlack));
	board[0][3] = ptr;
	// Pawns
	ptr = PiecePtr(new Pawn(ChessColorWhite));
	PiecePtr blackPawn(new Pawn(ChessColorBlack));
	for (int col = 0; col < BOARD_NUM_COLS; col++)
	{
		board[6][col] = ptr;
		board[1][col] = blackPawn;
	}
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


/* Rook */

#include "Rook.h"
#include "ChessDefinitions.h"
#include <glib.h>
#include "Board.h"

using namespace std;

Rook::Rook(ChessColor color) : Piece(ChessPieceTypeRook, color)
{}

set<Location> Rook::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	//look to the right until we run into the edge or another piece
	for (int col = current.column() + 1; col < BOARD_NUM_COLS; col++)
	{
		Location next(current.row(), col);
		if (board.at(next) != NULL)
		{
			if (board.at(next)->color() != this->color())
			{
				// enemy piece; make it available for the taking
				moves.insert(next);
			}
			break; // no moves further to the right
		}
		else
		{
			// no piece there
			moves.insert(next);
		}
	}

	for (int col = current.column() - 1; col >= 0; col--)
	{
		Location next(current.row(), col);
		if (board.at(next) != NULL)
		{
			if (board.at(next)->color() != this->color())
			{
				// enemy piece; make it available for the taking
				moves.insert(next);
			}
			break; // no moves further to the left
		}
		else
		{
			// no piece there
			moves.insert(next);
		}
	}

	for (int row = current.row() - 1; row >= 0; row--)
	{
		Location next(row, current.column());
		if (board.at(next) != NULL)
		{
			if (board.at(next)->color() != this->color())
			{
				// enemy piece; make it available for the taking
				moves.insert(next);
			}
			break; // no moves further to the left
		}
		else
		{
			// no piece there
			moves.insert(next);
		}
	}

	for (int row = current.row() + 1; row < BOARD_NUM_ROWS; row++)
	{
		Location next(row, current.column());
		if (board.at(next) != NULL)
		{
			if (board.at(next)->color() != this->color())
			{
				// enemy piece; make it available for the taking
				moves.insert(next);
			}
			break; // no moves further to the left
		}
		else
		{
			// no piece there
			moves.insert(next);
		}
	}

	return moves;
}


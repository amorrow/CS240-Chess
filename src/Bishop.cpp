/* Bishop.cpp */

#include "Bishop.h"
#include "Board.h"

using namespace std;

Bishop::Bishop(ChessColor color) : Piece(ChessPieceTypeBishop, color)
{}

set<Location> Bishop::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	//work along the up & right diagonal
	Location next(current.row()+1, current.column()+1);
	while(true)
	{
		if (!next.isValid())
			break;
		if (board.at(next) != NULL)
		{
			if (board.at(next)->color() != this->color())
			{
				moves.insert(next);
			}
			break;
		}
		else
		{
			moves.insert(next);
		}
		next = Location(next.row() + 1, next.column() + 1);
	}
	
	// up and to the left
	next = Location(current.row() + 1, current.column() - 1);
	while(true)
	{
		if (!next.isValid())
			break;
		if (board.at(next) != NULL)
		{
			if (board.at(next)->color() != this->color())
			{
				moves.insert(next);
			}
			break;
		}
		else
		{
			moves.insert(next);
		}
		next = Location(next.row() + 1, next.column() - 1);
	}

	// down and to the left
	next = Location(current.row() - 1, current.column() - 1);
	while(true)
	{
		if (!next.isValid())
			break;
		if (board.at(next) != NULL)
		{
			if (board.at(next)->color() != this->color())
			{
				moves.insert(next);
			}
			break;
		}
		else
		{
			moves.insert(next);
		}
		next = Location(next.row() - 1, next.column() - 1);
	}

	// down and to the right
	next = Location(current.row() - 1, current.column() + 1);
	while(true)
	{
		if (!next.isValid())
			break;
		if (board.at(next) != NULL)
		{
			if (board.at(next)->color() != this->color())
			{
				moves.insert(next);
			}
			break;
		}
		else
		{
			moves.insert(next);
		}
		next = Location(next.row() - 1, next.column() + 1);
	}

	return moves;
}


/* Bishop.cpp */

#include "Bishop.h"
#include "Board.h"

using namespace std;

Bishop::Bishop(ChessColor color) : Piece(ChessPieceTypeBishop, color)
{}

void addMoves(Location current, Board& board, set<Location>& moves, int rowDiff, int colDiff, ChessColor ownColor)
{
	Location next = Location(current.row() + rowDiff, current.column() + colDiff);
	while(true)
	{
		if (!next.isValid())
			break;
		if (board.at(next) != NULL)
		{
			if (board.at(next)->color() != ownColor)
			{
				moves.insert(next);
			}
			break;
		}
		else
		{
			moves.insert(next);
		}
		next = Location(next.row() + rowDiff, next.column() + colDiff);
	}
}

set<Location> Bishop::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	//work along the up & right diagonal
	addMoves(current, board, moves, 1, 1, this->color());
	
	
	// up and to the left
	addMoves(current, board, moves, 1, -1, this->color());

	// down and to the left
	addMoves(current, board, moves, -1, -1, this->color());

	// down and to the right
	addMoves(current, board, moves, -1, 1, this->color());

	return moves;
}


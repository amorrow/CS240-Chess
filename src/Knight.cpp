/* Knight.cpp */

#include "Knight.h"
#include "Board.h"

using namespace std;

void Knight::checkAndAddLocation(Location& loc, Board& board, set<Location>& moveSet) const
{
	if (!loc.isValid())
		return;
	if (board.at(loc) != NULL)
	{
		if (board.at(loc)->color() != this->color())
		{
			// enemy piece
			moveSet.insert(loc);
		}
	}
	else
	{
		moveSet.insert(loc);
	}
}

Knight::Knight(ChessColor color) : Piece(ChessPieceTypeKnight, color)
{}

set<Location> Knight::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	Location next(current.row() - 2, current.column() + 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() - 2, current.column() - 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() - 1, current.column() - 2);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 1, current.column() - 2);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 2, current.column() - 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 2, current.column() + 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 1, current.column() + 2);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() - 1, current.column() + 2);
	checkAndAddLocation(next, board, moves);
	return moves;
}


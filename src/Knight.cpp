/* Knight.cpp */

#include "Knight.h"
#include "Board.h"

using namespace std;

Knight::Knight(ChessColor color) : Piece(ChessPieceTypeKnight, color)
{}

Knight::~Knight()
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


/* King.cpp */

#include "King.h"

using namespace std;

King::King(ChessColor color) : Piece(ChessPieceTypeKing, color)
{}

King::~King()
{}

set<Location> King::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	Location next(current.row() - 1, current.column());
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() - 1, current.column() - 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row(), current.column() - 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 1, current.column() - 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 1, current.column());
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 1, current.column() + 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row(), current.column() + 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() - 1, current.column() + 1);
	checkAndAddLocation(next, board, moves);
	return moves;
}


/* Queen.cpp */

#include "Queen.h"

using namespace std;

Queen::Queen(ChessColor color) : Piece(ChessPieceTypeQueen, color)
{}

set<Location> Queen::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	moves.insert(Location(3,3));
	return moves;
}


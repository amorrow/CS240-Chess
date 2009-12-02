/* King.cpp */

#include "King.h"

using namespace std;

King::King(ChessColor color) : Piece(ChessPieceTypeKing, color)
{}

set<Location> King::validMoves(Location current) const
{
	set<Location> moves;
	moves.insert(Location(4,4));
	return moves;
}


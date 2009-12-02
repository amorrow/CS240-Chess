/* Knight.cpp */

#include "Knight.h"

using namespace std;

Knight::Knight(ChessColor color) : Piece(ChessPieceTypeKnight, color)
{}

set<Location> Knight::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	moves.insert(Location(0,0));
	return moves;
}


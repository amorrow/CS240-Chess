/* Bishop.cpp */

#include "Bishop.h"

using namespace std;

Bishop::Bishop(ChessColor color) : Piece(ChessPieceTypeBishop, color)
{}

set<Location> Bishop::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	moves.insert(Location(2,2));
	return moves;
}


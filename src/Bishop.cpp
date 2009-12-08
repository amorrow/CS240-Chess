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
	addMoves(current, board, moves, 1, 1);
	
	// up and to the left
	addMoves(current, board, moves, 1, -1);

	// down and to the left
	addMoves(current, board, moves, -1, -1);

	// down and to the right
	addMoves(current, board, moves, -1, 1);

	return moves;
}


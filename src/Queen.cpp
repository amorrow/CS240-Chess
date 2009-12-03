/* Queen.cpp */

#include "Queen.h"

using namespace std;

Queen::Queen(ChessColor color) : Piece(ChessPieceTypeQueen, color), Rook(color), Bishop(color)
{}

set<Location> Queen::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	set<Location> rookMoves = Rook::validMoves(current, board);
	set<Location> bishopMoves = Bishop::validMoves(current, board);

	moves.insert(rookMoves.begin(), rookMoves.end());
	moves.insert(bishopMoves.begin(), bishopMoves.end());

	return moves;
}


/* Rook */

#include "Rook.h"
#include "ChessDefinitions.h"
#include <glib.h>
#include "Board.h"

using namespace std;

Rook::Rook(ChessColor color) : Piece(ChessPieceTypeRook, color)
{}

Rook::~Rook()
{}

set<Location> Rook::validMoves(Location current, Board& board) const
{
	set<Location> moves;

	addMoves(current, board, moves, 0, 1);

	addMoves(current, board, moves, 0, -1);

	addMoves(current, board, moves, -1, 0);

	addMoves(current, board, moves, 1, 0);

	return moves;
}


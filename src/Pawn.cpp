/* Pawn.cpp */

#include "Pawn.h"
#include <glib.h>

using namespace std;

Pawn::Pawn(ChessColor color) : Piece(ChessPieceTypePawn, color)
{}

set<Location> Pawn::validMoves(Location current) const
{
	g_debug("Pawn asked for its moves.");
	set<Location> moves;
	moves.insert(Location(current.row()-1, current.column()));
	return moves;
}


/* Rook */

#include "Rook.h"
#include "ChessDefinitions.h"
#include <glib.h>

using namespace std;

Rook::Rook(ChessColor color) : Piece(ChessPieceTypeRook, color)
{}

set<Location> Rook::validMoves(Location current) const
{
	g_debug("Rook asked for its moves.");
	set<Location> moves;
	moves.insert(Location(0,1));
	return moves;
}


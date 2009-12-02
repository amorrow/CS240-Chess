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
	return set<Location>();
}


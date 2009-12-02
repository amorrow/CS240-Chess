/* Rook */

#include "Rook.h"
#include <glib.h>

using namespace std;

set<Location> Rook::validMoves(Location current) const
{
	g_debug("Rook asked for its moves.");
	return set<Location>();
}


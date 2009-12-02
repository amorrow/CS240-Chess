/* Rook */

#ifndef _CS240CHESS_ROOK_H
#define _CS240CHESS_ROOK_H

#include "Piece.h"

class Rook
{
public:
	Rook();
	virtual std::set<Location> validMoves(Location current) const;
};

#endif


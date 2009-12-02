/* Rook */

#ifndef _CS240CHESS_ROOK_H
#define _CS240CHESS_ROOK_H

#include "Piece.h"

class Rook : public Piece
{
public:
	Rook(ChessColor color);
	virtual std::set<Location> validMoves(Location current) const;
};

#endif


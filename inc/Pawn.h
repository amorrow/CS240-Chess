/* Pawn.h */

#ifndef _CS240CHESS_PAWN_H
#define _CS240CHESS_PAWN_H

#include "Piece.h"
#include <set>

class Pawn : public Piece
{
public:
	Pawn(ChessColor color);
	virtual std::set<Location> validMoves(Location current) const;
};

#endif

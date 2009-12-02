/* Bishop.h */

#ifndef _CS240CHESS_BISHOP_H
#define _CS240CHESS_BISHOP_H

#include "Piece.h"

class Bishop : public Piece
{
public:
	Bishop(ChessColor color);
	virtual std::set<Location> validMoves(Location current) const;
};

#endif


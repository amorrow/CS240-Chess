/* Queen.h */

#ifndef _CS240CHESS_QUEEN_H
#define _CS240CHESS_QUEEN_H

#include "Piece.h"

class Queen : public Piece
{
public:
	Queen(ChessColor color);
	virtual std::set<Location> validMoves(Location current) const;
};

#endif


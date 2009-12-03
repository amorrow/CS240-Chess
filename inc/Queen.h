/* Queen.h */

#ifndef _CS240CHESS_QUEEN_H
#define _CS240CHESS_QUEEN_H

#include "Rook.h"
#include "Bishop.h"

class Queen : public Rook, public Bishop
{
public:
	Queen(ChessColor color);
	virtual std::set<Location> validMoves(Location current, Board& board) const;
};

#endif


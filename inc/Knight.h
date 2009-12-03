/* Knight.h */

#ifndef _CS240CHESS_KNIGHT_H
#define _CS240CHESS_KNIGHT_H

#include "Piece.h"

class Knight : public Piece
{
public:
	Knight(ChessColor color);
	virtual std::set<Location> validMoves(Location current, Board& board) const;
};

#endif


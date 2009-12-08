/* King.h */

#ifndef _CS240CHESS_KING_H
#define _CS240CHESS_KING_H

#include "Piece.h"

class King : public Piece
{
public:
	King(ChessColor color);
	virtual ~King();
	virtual std::set<Location> validMoves(Location current, Board& board) const;
};

#endif


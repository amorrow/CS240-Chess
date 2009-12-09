/* Rook */

#ifndef _CS240CHESS_ROOK_H
#define _CS240CHESS_ROOK_H

#include "Piece.h"

class Rook : public virtual Piece
{
public:
	Rook(ChessColor color);
	virtual ~Rook();
	virtual std::set<Location> validMoves(Location current, Board& board) const;
	static bool Test(std::ostream& os);
};

#endif


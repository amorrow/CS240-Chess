/* Bishop.h */

#ifndef _CS240CHESS_BISHOP_H
#define _CS240CHESS_BISHOP_H

#include "Piece.h"

class Bishop : public virtual Piece
{
public:
	Bishop(ChessColor color);
	virtual ~Bishop();
	virtual std::set<Location> validMoves(Location current, Board& board) const;
	static bool Test(std::ostream & os);
};

#endif


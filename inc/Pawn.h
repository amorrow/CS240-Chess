/* Pawn.h */

#ifndef _CS240CHESS_PAWN_H
#define _CS240CHESS_PAWN_H

#include "Piece.h"
#include <set>

class Pawn : public Piece
{
private:
	static bool TestMovedPawn(std::ostream& os);
public:
	Pawn(ChessColor color);
	virtual ~Pawn();
	virtual std::set<Location> validMoves(Location current, Board& board) const;
	static bool Test(std::ostream& os);
};

#endif


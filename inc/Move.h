/* Move
 * Represents a single move in the game's history.
 */

#ifndef _CS240CHESS_MOVE_H
#define _CS240CHESS_MOVE_H

#include "Piece.h"
#include "Location.h"

class Move
{
private:
	PiecePtr _piece;
	Location _oldLocation;
	Location _newLocation;
	PiecePtr _taken;
public:
	Move();
	~Move();
	Move(PiecePtr p, Location oldL, Location newL);
	Move(PiecePtr p, Location oldL, Location newL, PiecePtr taken);
	
	PiecePtr piece() const;
	Location oldLocation() const;
	Location newLocation() const;
	PiecePtr pieceTaken() const;
	
	void take(PiecePtr p);
};

#endif

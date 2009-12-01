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
	Piece _piece;
	Location _oldLocation;
	Location _newLocation;
	Piece * _taken;
public:
	Move();
	~Move();
	Move(Piece p, Location oldL, Location newL);
	Move(Piece p, Location oldL, Location newL, Piece taken);
	
	Piece piece() const;
	Location oldLocation() const;
	Location newLocation() const;
	Piece* pieceTaken() const;
	
	void take(Piece p);
};

#endif

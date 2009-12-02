/* Move
 * Represents a single move in the game's history.
 */

#include "Move.h"

Move::Move()
{}

Move::~Move()
{
}

Move::Move(PiecePtr p, Location oldL, Location newL) : _piece(p), _oldLocation(oldL), _newLocation(newL)
{}

Move::Move(PiecePtr p, Location oldL, Location newL, PiecePtr taken) : _piece(p), _oldLocation(oldL), _newLocation(newL), _taken(taken)
{}

PiecePtr Move::piece() const
{
	return _piece;
}

Location Move::oldLocation() const
{
	return _oldLocation;
}

Location Move::newLocation() const
{
	return _newLocation;
}

PiecePtr Move::pieceTaken() const
{
	return _taken;
}

void Move::take(PiecePtr p)
{
	_taken = p;
}


/* Move
 * Represents a single move in the game's history.
 */

#include "Move.h"

Move::Move() : _piece(ChessPieceTypeNoPiece), _taken(NULL)
{}

Move::~Move()
{
	if (_taken != NULL)
	{
		delete _taken;
		_taken = NULL;
	}
}

Move::Move(Piece p, Location oldL, Location newL) : _piece(p), _oldLocation(oldL), _newLocation(newL), _taken(NULL)
{}

Move::Move(Piece p, Location oldL, Location newL, Piece taken) : _piece(p), _oldLocation(oldL), _newLocation(newL), _taken(new Piece(taken))
{}

Piece Move::piece() const
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

Piece* Move::pieceTaken() const
{
	return _taken;
}

void Move::take(Piece p)
{
	_taken = new Piece(p);
}


/* Piece
 * A single chess piece.
 * Abstract base class defines functionality.
 * Subclasses actually implement.
 */

#include "Piece.h"

using namespace std;

Piece::Piece() : _type(ChessPieceTypeNoPiece)
{}

ChessPieceType Piece::type() const
{
	return _type;
}

set<Location> Piece::validMoves(Location current) const
{
	return set<Location>();
}


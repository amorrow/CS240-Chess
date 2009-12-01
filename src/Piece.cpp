/* Piece
 * A single chess piece.
 * Abstract base class defines functionality.
 * Subclasses actually implement.
 */

#include "Piece.h"

using namespace std;

Piece::Piece() : _type(ChessPieceTypeNoPiece)
{}

Piece::Piece(ChessPieceType t) : _type(t)
{}

ChessPieceType Piece::type() const
{
	return _type;
}

set<Location> Piece::validMoves() const
{
	return set<Location>();
}


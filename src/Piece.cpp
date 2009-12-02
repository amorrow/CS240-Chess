/* Piece
 * A single chess piece.
 * Abstract base class defines functionality.
 * Subclasses actually implement.
 */

#include "Piece.h"

using namespace std;

Piece::Piece(ChessPieceType type, ChessColor color) : _type(type), _color(color)
{}

ChessPieceType Piece::type() const
{
	return _type;
}

ChessColor Piece::color() const
{
	return _color;
}

set<Location> Piece::validMoves(Location current) const
{
	return set<Location>();
}


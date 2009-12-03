/* Piece
 * A single chess piece.
 * Abstract base class defines functionality.
 * Subclasses actually implement.
 */

#include "Piece.h"
#include "Board.h"

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

void Piece::checkAndAddLocation(Location& loc, Board& board, set<Location>& moveSet) const
{
	if (!loc.isValid())
		return;
	if (board.at(loc) != NULL)
	{
		if (board.at(loc)->color() != this->color())
		{
			// enemy piece
			moveSet.insert(loc);
		}
	}
	else
	{
		moveSet.insert(loc);
	}
}


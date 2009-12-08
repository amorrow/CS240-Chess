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

Piece::~Piece()
{}

ChessPieceType Piece::type() const
{
	return _type;
}

ChessColor Piece::color() const
{
	return _color;
}

void Piece::addMoves(
		Location current,
		Board& board,
		set<Location>& moves,
		int rowDiff,
		int colDiff) const
{
	Location next = Location(current.row() + rowDiff, current.column() + colDiff);
	while(true)
	{
		if (!next.isValid())
			break;
		if (board.at(next) != NULL)
		{
			if (board.at(next)->color() != this->color())
			{
				moves.insert(next);
			}
			break;
		}
		else
		{
			moves.insert(next);
		}
		next = Location(next.row() + rowDiff, next.column() + colDiff);
	}
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

bool Piece::operator==(const Piece& other) const
{
	return (_type == other._type) && (_color == other._color);
}

bool Piece::operator!=(const Piece& other) const
{
	return !(*this == other);
}


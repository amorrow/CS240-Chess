/* Pawn.cpp */

#include "Pawn.h"
#include "Board.h"
#include <glib.h>

using namespace std;

Pawn::Pawn(ChessColor color) : Piece(ChessPieceTypePawn, color)
{}

Pawn::~Pawn()
{}

set<Location> Pawn::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	int spacesToMove;
	if (this->color() == ChessColorWhite)
	{
		spacesToMove = -1;
	}
	else
	{
		spacesToMove = 1;
	}
	Location next(current.row()+spacesToMove, current.column());
	if (next.isValid() && board.at(next) == NULL)
	{
		moves.insert(next);
		next = Location(current.row()+(2*spacesToMove), current.column());
		if (((this->color() == ChessColorWhite && current.row() == 6)
				|| (this->color() == ChessColorBlack && current.row() == 1)) && board.at(next) == NULL)
		{
			// first move of length two
			moves.insert(next);
		}
	}

	// now check to see if there are any pieces we could take
	Location takeOne(current.row()+spacesToMove, current.column()-1);
	Location takeTwo(current.row()+spacesToMove, current.column()+1);

	if (takeOne.isValid() && board.at(takeOne) != NULL && board.colorAt(takeOne) != this->color())
	{
		moves.insert(takeOne);
	}
	if (takeTwo.isValid() && board.at(takeTwo) != NULL && board.colorAt(takeTwo) != this->color())
	{
		moves.insert(takeTwo);
	}

	return moves;
}


/* Pawn.cpp */

#include "Pawn.h"
#include "Board.h"
#include <glib.h>

using namespace std;

Pawn::Pawn(ChessColor color) : Piece(ChessPieceTypePawn, color)
{}

set<Location> Pawn::validMoves(Location current, Board& board) const
{
	g_debug("Pawn asked for its moves.");
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
	if (next.isValid())
	{
		moves.insert(next);
	}
	if ((this->color() == ChessColorWhite && current.row() == 6)
			|| (this->color() == ChessColorBlack && current.row() == 1))
	{
		// first move of length two
		moves.insert(Location(current.row()+(2*spacesToMove), current.column()));
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


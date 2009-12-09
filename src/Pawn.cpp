/* Pawn.cpp */

#include "Pawn.h"
#include "Board.h"
#include <glib.h>
#include <vector>
#include <ostream>

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

bool Pawn::Test(ostream& os)
{
	os << "Testing pawn..." << endl;
	Board b;
	b.placeDefaultPieces();
	set<Location> givenMoves = b.at(Location(6,1))->validMoves(Location(6,1), b);

	vector<Location> validMoves;
	validMoves.push_back(Location(5,1));
	validMoves.push_back(Location(4,1));

	for (vector<Location>::const_iterator validIter = validMoves.begin(); validIter != validMoves.end(); validIter++)
	{
		if (givenMoves.erase(*validIter) == 0)
		{
			os << "ERROR: pawn did not give move " << validIter->row() << ", " << validIter->column() << " when it was expected to!" << endl;
			return false;
		}
	}

	if (givenMoves.size() > 0)
	{
		// extra moves given that don't belong
		for (set<Location>::const_iterator extraIter = givenMoves.begin(); extraIter != givenMoves.end(); extraIter++)
		{
			os << "ERROR: pawn gave extra move " << extraIter->row() << ", " << extraIter->column() << endl;
		}
		return false;
	}

	// now move him a bit
	b.movePiece(Location(6,1), Location(2,1));
	givenMoves = b.at(Location(2,1))->validMoves(Location(2,1), b);

	validMoves.clear();
	validMoves.push_back(Location(1,0));
	validMoves.push_back(Location(1,2));

	for (vector<Location>::const_iterator validIter = validMoves.begin(); validIter != validMoves.end(); validIter++)
	{
		if (givenMoves.erase(*validIter) == 0)
		{
			os << "ERROR: pawn did not give move " << validIter->row() << ", " << validIter->column() << " when it was expected to!" << endl;
			return false;
		}
	}

	if (givenMoves.size() > 0)
	{
		// extra moves given that don't belong
		for (set<Location>::const_iterator extraIter = givenMoves.begin(); extraIter != givenMoves.end(); extraIter++)
		{
			os << "ERROR: pawn gave extra move " << extraIter->row() << ", " << extraIter->column() << endl;
		}
		return false;
	}
	os << "Pawn passed." << endl;
	return true;
}


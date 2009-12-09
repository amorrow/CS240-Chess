/* Knight.cpp */

#include "Knight.h"
#include "Board.h"
#include <vector>
#include <ostream>

using namespace std;

Knight::Knight(ChessColor color) : Piece(ChessPieceTypeKnight, color)
{}

Knight::~Knight()
{}

set<Location> Knight::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	Location next(current.row() - 2, current.column() + 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() - 2, current.column() - 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() - 1, current.column() - 2);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 1, current.column() - 2);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 2, current.column() - 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 2, current.column() + 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 1, current.column() + 2);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() - 1, current.column() + 2);
	checkAndAddLocation(next, board, moves);
	return moves;
}

bool Knight::Test(ostream& os)
{
	os << "Testing Knight..." << endl;
	Board b;
	b.placeDefaultPieces();
	// we're cheating and just moving it right where we want it
	b.movePiece(Location(7,1), Location(3, 5));
	set<Location> givenMoves = b.at(Location(3,5))->validMoves(Location(3,5), b);

	vector<Location> validMoves;
	validMoves.push_back(Location(1,4));
	validMoves.push_back(Location(1,6));
	validMoves.push_back(Location(2,3));
	validMoves.push_back(Location(2,7));
	validMoves.push_back(Location(4,3));
	validMoves.push_back(Location(4,7));
	validMoves.push_back(Location(5,4));
	validMoves.push_back(Location(5,6));

	for (vector<Location>::const_iterator validIter = validMoves.begin();
			validIter != validMoves.end(); validIter++)
	{
		if (givenMoves.erase(*validIter) == 0)
		{
			os << "ERROR: knight did not give move "
				<< validIter->row() << ", " << validIter->column()
				<< " when it was expected to!" << endl;
			return false;
		}
	}

	if (givenMoves.size() > 0)
	{
		// extra moves given that don't belong
		for (set<Location>::const_iterator extraIter = givenMoves.begin();
				extraIter != givenMoves.end(); extraIter++)
		{
			os << "ERROR: knight gave extra move "
				<< extraIter->row() << ", " << extraIter->column() << endl;
		}
		return false;
	}
	os << "Knight passed." << endl;
	return true;
}


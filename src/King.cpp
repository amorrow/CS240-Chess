/* King.cpp */

#include "King.h"
#include "Board.h"
#include <vector>
#include <ostream>

using namespace std;

King::King(ChessColor color) : Piece(ChessPieceTypeKing, color)
{}

King::~King()
{}

set<Location> King::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	Location next(current.row() - 1, current.column());
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() - 1, current.column() - 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row(), current.column() - 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 1, current.column() - 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 1, current.column());
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() + 1, current.column() + 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row(), current.column() + 1);
	checkAndAddLocation(next, board, moves);
	next = Location(current.row() - 1, current.column() + 1);
	checkAndAddLocation(next, board, moves);
	return moves;
}


bool King::Test(std::ostream & os)
{
	os << "Testing King..." << endl;
	Board b;
	b.placeDefaultPieces();
	b.movePiece(Location(7, 4), Location(4, 3));

	set<Location> givenMoves = b.at(Location(4, 3))->validMoves(Location(4, 3), b);

	vector<Location> validMoves;
	validMoves.push_back(Location(3, 2));
	validMoves.push_back(Location(3, 3));
	validMoves.push_back(Location(3, 4));
	validMoves.push_back(Location(4, 2));
	validMoves.push_back(Location(4, 4));
	validMoves.push_back(Location(5, 2));
	validMoves.push_back(Location(5, 3));
	validMoves.push_back(Location(5, 4));

	for (vector<Location>::const_iterator validIter = validMoves.begin();
			validIter != validMoves.end(); validIter++)
	{
		if (givenMoves.erase(*validIter) == 0)
		{
			os << "ERROR: king did not give move "
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
			os << "ERROR: king gave extra move " << extraIter->row() << ", " << extraIter->column() << endl;
		}
		return false;
	}
	os << "King passed." << endl;
	return true;


	return false;
}


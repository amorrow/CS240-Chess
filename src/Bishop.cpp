/* Bishop.cpp */

#include "Bishop.h"
#include "Board.h"
#include <ostream>
#include <vector>

using namespace std;

Bishop::Bishop(ChessColor color) : Piece(ChessPieceTypeBishop, color)
{}

Bishop::~Bishop()
{}

set<Location> Bishop::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	//work along the up & right diagonal
	addMoves(current, board, moves, 1, 1);
	
	// up and to the left
	addMoves(current, board, moves, 1, -1);

	// down and to the left
	addMoves(current, board, moves, -1, -1);

	// down and to the right
	addMoves(current, board, moves, -1, 1);

	return moves;
}

bool Bishop::Test(ostream & os)
{
	os << "Testing bishop..." << endl;
	Board b;
	b.placeDefaultPieces();
	// move out white pawn
	b.movePiece(Location(6, 3), Location(5, 3));
	// move out white bishop
	b.movePiece(Location(7, 2), Location(4, 5));
	// now get his moves
	set<Location> givenMoves = b.at(Location(4, 5))->validMoves(Location(4, 5), b);
	// now iterate over all the moves he ought to have and be sure
	// that they're all there and that there are no extras
	vector<Location> validMoves;
	validMoves.push_back(Location(1, 2));
	validMoves.push_back(Location(2, 3));
	validMoves.push_back(Location(2, 7));
	validMoves.push_back(Location(3, 4));
	validMoves.push_back(Location(3, 6));
	validMoves.push_back(Location(5, 4));
	validMoves.push_back(Location(5, 6));
	validMoves.push_back(Location(6, 3));
	validMoves.push_back(Location(7, 2));

	for (vector<Location>::const_iterator validIter = validMoves.begin();
			validIter != validMoves.end(); validIter++)
	{
		if (givenMoves.erase(*validIter) == 0)
		{
			os << "ERROR: bishop did not give move "
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
			os << "ERROR: bishop gave extra move "
				<< extraIter->row() << ", " << extraIter->column() << endl;
		}
		return false;
	}
	os << "Bishop passed." << endl;
	return true;
}


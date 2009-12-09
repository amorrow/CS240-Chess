/* Rook */

#include "Rook.h"
#include "ChessDefinitions.h"
#include <glib.h>
#include "Board.h"
#include <ostream>
#include <vector>

using namespace std;

Rook::Rook(ChessColor color) : Piece(ChessPieceTypeRook, color)
{}

Rook::~Rook()
{}

set<Location> Rook::validMoves(Location current, Board& board) const
{
	set<Location> moves;

	addMoves(current, board, moves, 0, 1);

	addMoves(current, board, moves, 0, -1);

	addMoves(current, board, moves, -1, 0);

	addMoves(current, board, moves, 1, 0);

	return moves;
}

bool Rook::Test(ostream& os)
{
	os << "Testing rook..." << endl;
	Board b;
	b.placeDefaultPieces();
	b.movePiece(Location(7,0), Location(3,3));

	set<Location> givenMoves = b.at(Location(3,3))->validMoves(Location(3,3), b);

	vector<Location> validMoves;
	validMoves.push_back(Location(1,3));
	validMoves.push_back(Location(2,3));
	validMoves.push_back(Location(3,0));
	validMoves.push_back(Location(3,1));
	validMoves.push_back(Location(3,2));
	validMoves.push_back(Location(3,4));
	validMoves.push_back(Location(3,5));
	validMoves.push_back(Location(3,6));
	validMoves.push_back(Location(3,7));
	validMoves.push_back(Location(4,3));
	validMoves.push_back(Location(5,3));

	for (vector<Location>::const_iterator validIter = validMoves.begin();
			validIter != validMoves.end(); validIter++)
	{
		if (givenMoves.erase(*validIter) == 0)
		{
			os << "ERROR: rook did not give move "
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
			os << "ERROR: rook gave extra move "
				<< extraIter->row() << ", " << extraIter->column() << endl;
		}
		return false;
	}
	os << "Rook passed." << endl;
	return true;
}


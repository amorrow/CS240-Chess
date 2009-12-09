/* Queen.cpp */

#include "Queen.h"
#include "Board.h"
#include <ostream>
#include <vector>

using namespace std;

Queen::Queen(ChessColor color) : Piece(ChessPieceTypeQueen, color), Rook(color), Bishop(color)
{}

Queen::~Queen()
{}

set<Location> Queen::validMoves(Location current, Board& board) const
{
	set<Location> moves;
	set<Location> rookMoves = Rook::validMoves(current, board);
	set<Location> queenMoves = Bishop::validMoves(current, board);

	moves.insert(rookMoves.begin(), rookMoves.end());
	moves.insert(queenMoves.begin(), queenMoves.end());

	return moves;
}

bool Queen::Test(ostream& os)
{
	os << "Testing queen..." << endl;
	Board b;
	b.placeDefaultPieces();
	b.movePiece(Location(7,3), Location(3,4));
	set<Location> givenMoves = b.at(Location(3,4))->validMoves(Location(3,4), b);

	vector<Location> validMoves;
	validMoves.push_back(Location(1,2));
	validMoves.push_back(Location(1,4));
	validMoves.push_back(Location(1,6));
	validMoves.push_back(Location(2,3));
	validMoves.push_back(Location(2,4));
	validMoves.push_back(Location(2,5));
	validMoves.push_back(Location(3,0));
	validMoves.push_back(Location(3,1));
	validMoves.push_back(Location(3,2));
	validMoves.push_back(Location(3,3));
	validMoves.push_back(Location(3,5));
	validMoves.push_back(Location(3,6));
	validMoves.push_back(Location(3,7));
	validMoves.push_back(Location(4,3));
	validMoves.push_back(Location(4,4));
	validMoves.push_back(Location(4,5));
	validMoves.push_back(Location(5,2));
	validMoves.push_back(Location(5,4));
	validMoves.push_back(Location(5,6));

	for (vector<Location>::const_iterator validIter = validMoves.begin(); validIter != validMoves.end(); validIter++)
	{
		if (givenMoves.erase(*validIter) == 0)
		{
			os << "ERROR: queen did not give move " << validIter->row() << ", " << validIter->column() << " when it was expected to!" << endl;
			return false;
		}
	}

	if (givenMoves.size() > 0)
	{
		// extra moves given that don't belong
		for (set<Location>::const_iterator extraIter = givenMoves.begin(); extraIter != givenMoves.end(); extraIter++)
		{
			os << "ERROR: queen gave extra move " << extraIter->row() << ", " << extraIter->column() << endl;
		}
		return false;
	}
	os << "Queen passed." << endl;
	return true;
}


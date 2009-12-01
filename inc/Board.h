/* Board
 * Implements a chess board.
 */

#ifndef _CS240CHESS_BOARD_H
#define _CS240CHESS_BOARD_H

#include "Location.h"
#include "Piece.h"
#include "ChessDefinitions.h"
#include <map>

class Board
{
private:
	std::map<Location, Piece> board;
public:
	// Constructors & Destructors
	Board();
	~Board();
	// Accessing & moving
	Piece at(Location loc);
	ChessPieceType typeAt(Location loc);
	bool hasPieceAt(Location loc);
	// Precondition: the specified move is valid
	void movePiece(Location oldLoc, Location newLoc);
	// Precondition: the specified space is empty
	void insertPiece(Location loc, Piece p);
	
	// Removes all the current pieces.
	void clear();
	// Sets up a standard chess game setup.
	void placeDefaultPieces();
	
	// Algorithms
	bool stalemate();
	bool whiteInCheck();
	bool blackInCheck();
	bool whiteInCheckmate();
	bool blackInCheckmate();
};

#endif

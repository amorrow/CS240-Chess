/* Board
 * Implements a chess board.
 */

#ifndef _CS240CHESS_BOARD_H
#define _CS240CHESS_BOARD_H

#include "Location.h"
#include "Piece.h"
#include "ChessDefinitions.h"

class Board
{
private:
	PiecePtr** board;
	bool playerInCheck(ChessColor color);
	bool playerInCheckmate(ChessColor color);
	std::set<Location> movesToEscapeCheck(Location toMove);
public:
	// Constructors & Destructors
	Board();
	~Board();
	// Accessing & moving
	PiecePtr at(Location loc);
	ChessPieceType typeAt(Location loc);
	ChessColor colorAt(Location loc);
	bool hasPieceAt(Location loc);
	// Returns a NULL pointer if the piece was not found.
	LocationPtr findPiece(ChessPieceType type, ChessColor color);
	// Precondition: the specified move is valid
	void movePiece(Location oldLoc, Location newLoc);
	// Precondition: the specified space is empty
	void insertPiece(Location loc, PiecePtr p);
	
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


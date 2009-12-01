/* Piece
 * A single chess piece.
 * Abstract base class defines functionality.
 * Subclasses actually implement.
 */

#ifndef _CS240CHESS_PIECE_H
#define _CS240CHESS_PIECE_H

#include "Location.h"
#include "ChessDefinitions.h"
#include <set>

class Piece
{
private:
	ChessPieceType _type;
public:
	Piece(); // creates a NoPiece type piece
	virtual std::set<Location> validMoves() const;
	ChessPieceType type() const;
};

#endif

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
#include <boost/shared_ptr.hpp>

class Board;

class Piece
{
private:
	ChessPieceType _type;
	ChessColor _color;
protected:
	Piece(ChessPieceType type, ChessColor color);
public:
	virtual std::set<Location> validMoves(Location current, Board& board) const = 0;
	ChessPieceType type() const;
	ChessColor color() const;
};

typedef boost::shared_ptr<Piece> PiecePtr;

#endif


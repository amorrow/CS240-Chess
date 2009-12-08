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
	// Checks if the piece may move to the given location. If so, adds it to
	// the given set.
	void checkAndAddLocation(Location& loc, Board& board, std::set<Location>& moveSet) const;
	// Iterates over moves in a line, adding them to the given set.
	// Used for bishop and rook.
	void addMoves(
		Location current,
		Board& board,
		std::set<Location>& moves,
		int rowDiff,
		int colDiff) const;

public:
	virtual ~Piece();
	virtual std::set<Location> validMoves(Location current, Board& board) const = 0;
	ChessPieceType type() const;
	ChessColor color() const;
	bool operator==(const Piece& other) const;
	bool operator!=(const Piece& other) const;
};

typedef boost::shared_ptr<Piece> PiecePtr;

#endif


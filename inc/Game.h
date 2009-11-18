/* Game
 * Implements a complete chess game.
 */

#ifndef _CS240CHESS_GAME_H
#define _CS240CHESS_GAME_H

#include "Location.h"
#include "Board.h"
#include "Move.h"
#include "ChessDefinitions.h"
#include <set>
#include <list>

class Game
{
private:
	Board _board;
	std::list<Move> _history; // can't be a stack - need an iterator to save
	ChessGameStatus _status;
	std::string _message;
	
	void clear();
	bool belongsToCurrentPlayer(Piece p);
	void updateGameStatus();
public:
	// Both of the following throw exceptions on errors.
	void load(std::string path);
	void save(std::string path);
	
	// Starts a new game.
	void startNew();
	
	// Variable access
	ChessGameStatus status() const;
	std::string message() const;
	Board& board();
	
	// Returns true if a valid move was made.
	// False if the move requested cannot be performed.
	bool makeMove(Location oldLoc, Location newLoc);
	
	// Returns true if a move was undone.
	// Returns false if there are no more moves to undo.
	bool undoMove();
	
	// Returns a set of the locations of interest to allow whatever frontend
	// we're using to redraw.
	std::set<Location> locationsChangedByLastMove() const;
};

#endif

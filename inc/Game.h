/* Game
 * Implements a complete chess game.
 */

#ifndef _CS240CHESS_GAME_H
#define _CS240CHESS_GAME_H

#include "Board.h"
#include "Move.h"
#include "ChessDefinitions.h"
#include <list>

class Game
{
private:
	Board _board;
	std::list<Move> _history;
	ChessGameStatus _status;
	std::string _message;
public:
	// Both of the following throw exceptions on errors.
	void load(std::string path);
	void save(std::string path);
	
	// Starts a new game.
	void clear();
	
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
	
	std::set<Location> locationsChangedByLastMove() const;
};

#endif

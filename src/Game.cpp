/* Game
 * Implements a complete chess game.
 */

#include "Game.h"

#include <string>
#include <stack>

#include <boost/shared_ptr.hpp>

using namespace std;
using boost::shared_ptr;

void Game::load(string path)
{
	
}

void Game::save(string path)
{
	
}

// Starts a new game.
void Game::clear()
{
	
}

ChessGameStatus Game::status() const
{
	
}

string Game::message() const
{
	
}

Board& Game::board()
{
	
}

// Returns true if a valid move was made.
// False if the move requested cannot be performed.
bool Game::makeMove(Location oldLoc, Location newLoc)
{
	
}

// Returns true if a move was undone.
// Returns false if there are no more moves to undo.
bool Game::undoMove()
{
	if (_history.empty())
	{
		return false;
	}
	Move last = _history.pop();
	_board.movePiece(last.newLocation(), last.oldLocation());
	if (last.pieceTaken() != NULL)
	{
		_board.insertPiece(last.newLocation(), last.pieceTaken());
	}
	return true;
}

// Returns a set of the locations of interest to allow whatever frontend
// we're using to redraw.
set<Location> Game::locationsChangedByLastMove() const
{
	set<Location> locs;
	if (_history.empty())
	{
		return locs; // empty set
	}
	Move m = _history.top();
	locs.insert(m.oldLocation());
	locs.insert(m.newLocation());
	return locs;
}

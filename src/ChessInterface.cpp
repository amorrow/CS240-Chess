/* ChessInterface
 * Facade class to simplify GUI access to chess methods.
 */

#include "ChessInterface.h"
#include "Location.h"

#include <set>
#include <map>
using namespace std;

set<Location> ChessInterface::availableMovesFromSquare(Location loc)
{
	return game.board().at(loc).validMoves();
}

bool ChessInterface::movePiece(Location oldLoc, Location newLoc)
{
	return game.makeMove(oldLoc, newLoc);
}

bool ChessInterface::undoMove()
{
	return game.undoMove();
}

void ChessInterface::startNewGame()
{
	game.startNew();
}

void ChessInterface::loadGame(string path)
{
	game.load(path);
}

void ChessInterface::saveGame(string path)
{
	game.save(path);
}

set<Location> ChessInterface::changedLocations() const
{
	return game.locationsChangedByLastMove();
}

ChessPieceType ChessInterface::pieceAtLocation(Location loc)
{
	return game.board().typeAt(loc);
}

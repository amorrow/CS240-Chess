/* ChessInterface
 * Facade class to simplify GUI access to chess methods.
 */

#include "ChessInterface.h"
#include "Location.h"

#include <set>
#include <map>
using namespace std;

set<Location> ChessInterface::availableMovesFromSquare(Location loc) const
{
	return game.board().at(loc).availableMoves();
}

bool ChessInterface::movePiece(Location oldLoc, Location newLoc)
{
	return game.movePiece(oldLoc, newLoc);
}

bool ChessInterface::undoMove()
{
	return game.undoMove();
}

void ChessInterface::startNewGame()
{
	game.clear();
}

void ChessInterface::loadGame(string path)
{
	game.load(path);
}

void ChessInterface::saveGame(string path)
{
	game.save(path);
}

std::set<Location> ChessInterface::changedLocations() const
{
	return game.locationsChangedByLastMove();
}

ChessPieceType ChessInterface::pieceAtLocation(Location loc) const
{
	return game.board().typeAt(loc);
}

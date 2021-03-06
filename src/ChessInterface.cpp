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
	return game.board().movesToEscapeCheck(loc);
}

set<Location> ChessInterface::availableMovesFromSquare(int row, int col)
{
	return this->availableMovesFromSquare(Location(row, col));
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

set<Location> ChessInterface::changedLocations()
{
	return game.locationsChangedByLastMove();
}

ChessPieceType ChessInterface::pieceAtLocation(Location loc)
{
	return game.board().typeAt(loc);
}

ChessPieceType ChessInterface::pieceAtLocation(int row, int col)
{
	return this->pieceAtLocation(Location(row, col));
}

ChessColor ChessInterface::colorAtLocation(Location loc)
{
	return game.board().colorAt(loc);
}

ChessColor ChessInterface::colorAtLocation(int row, int col)
{
	return this->colorAtLocation(Location(row, col));
}

bool ChessInterface::maySelectPieceAtLocation(int row, int col)
{
	return this->maySelectPieceAtLocation(Location(row, col));
}

bool ChessInterface::maySelectPieceAtLocation(Location loc)
{
	return this->pieceAtLocation(loc) != ChessPieceTypeNoPiece
		&& game.belongsToCurrentPlayer(game.board().at(loc));
}

string ChessInterface::message()
{
	return game.message();
}


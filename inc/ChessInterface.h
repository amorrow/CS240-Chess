/* ChessInterface
 * Facade class to simplify GUI access to chess methods.
 */

#ifndef _CS240CHESS_CHESS_INTERFACE_H
#define _CS240CHESS_CHESS_INTERFACE_H

#include "Game.h"
#include "Location.h"
#include "ChessDefinitions.h"
#include <set>

class ChessInterface
{
private:
	Game game;
public:
	// Indicates whose turn it is.
	ChessGameStatus gameStatus() const;
	// Message to be shown to the user (such as, White is in check)
	std::string message() const;
	// Clears the board and starts a new game.
	void startNewGame();
	// Loads the game at the specified path.
	// Throws exceptions if the file can't be opened or is in the wrong format.
	void loadGame(std::string gameFilePath);
	// Saves the game to the specified path.
	// Throws an exception if it can't save to that path.
	void saveGame(std::string gameFilePath);
	// Used to highlight squares when a player selects a piece.
	// Precondition: there's a piece on the square specified.
	// Check by calling pieceAtLocation() beforehand.
	std::set<Location> availableMovesFromSquare(int row, int col) const;
	std::set<Location> availableMovesFromSquare(Location loc) const;
	// Returns true if the piece is allowed to move there and the move was completed.
	// Returns false if an illegal move was indicated.
	bool movePiece(int oldRow, int oldCol, int newRow, int newCol);
	bool movePiece(Location oldLoc, Location newLoc);
	// Undoes a move.
	// If true, re-render the board afterward.
	// If false, don't bother.
	bool undoMove();
	// Indicates which locations were changed by the last move or undo.
	// Allows partial re-draws of the board.
	std::set<Location> changedLocations() const;
	// Indicates which piece belongs at a given location.
	ChessPieceType pieceAtLocation(int row, int col) const;
	ChessPieceType pieceAtLocation(Location loc) const;
};

#endif

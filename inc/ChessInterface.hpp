/* ChessInterface
 * Facade class to simplify GUI access to chess methods.
 */

#ifndef _CS240_CHESS_INTERFACE_HPP
#define _CS240_CHESS_INTERFACE_HPP

#include "Game.h"
#include "Location.h"

typedef enum
{
	ChessInterfaceGameStatusWhitesTurn,
	ChessInterfaceGameStatusBlacksTurn,
	ChessInterfaceGameStatusWhiteWins,
	ChessInterfaceGameStatusBlackWins,
	ChessInterfaceGameStatusStalemate,
} ChessInterfaceGameStatus;

typedef enum
{
	ChessInterfacePieceTypeWhitePawn,
	ChessInterfacePieceTypeWhiteRook,
	ChessInterfacePieceTypeWhiteKnight,
	ChessInterfacePieceTypeWhiteBishop,
	ChessInterfacePieceTypeWhiteQueen,
	ChessInterfacePieceTypeWhiteKing,
	ChessInterfacePieceTypeBlackPawn,
	ChessInterfacePieceTypeBlackRook,
	ChessInterfacePieceTypeBlackKnight,
	ChessInterfacePieceTypeBlackBishop,
	ChessInterfacePieceTypeBlackQueen,
	ChessInterfacePieceTypeBlackKing,
} ChessInterfacePieceType;

class ChessInterface
{
private:
	Game game;
	std::string nextMessage;
public:
	// Indicates whose turn it is.
	ChessInterfaceGameStatus gameStatus();
	// Message to be shown to the user (such as, White is in check)
	std::string message();
	// Clears the board and starts a new game.
	void startNewGame();
	// Loads the game at the specified path.
	// Throws exceptions if the file can't be opened or is in the wrong format.
	void loadGame(std::string & gameFilePath);
	// Saves the game to the specified path.
	// Throws an exception if it can't save to that path.
	void saveGame(std::string & gameFilePath);
	// Used to highlight squares when a player selects a piece.
	std::set<Location> availableMovesFromSquare(int row, int col);
	std::set<Location> availableMovesFromSquare(Location loc);
	// Returns true if the piece is allowed to move there and the move was completed.
	// Returns false if an illegal move was indicated.
	bool movePiece(int oldRow, int oldCol, int newRow, int newCol);
	bool movePiece(Location oldLoc, Location newLoc);
	// Undoes a move. Re-render the board afterward.
	void undoMove();
	// Indicates which locations were changed by the last move or undo.
	// Allows partial re-draws of the board.
	std::set<Location> changedLocations();
	// Indicates which piece belongs at a given location.
	ChessInterfacePieceType pieceAtLocation(int row, int col);
	ChessInterfacePieceType pieceAtLocation(Location loc);
};

#endif

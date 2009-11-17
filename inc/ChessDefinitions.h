/* ChessDefinitions
 * Enums and other constants used throughout the program.
 */

#ifndef _CS240CHESS_CHESS_DEFINITIONS_H
#define _CS240CHESS_CHESS_DEFINITIONS_H

typedef enum
{
	ChessGameStatusWhitesTurn,
	ChessGameStatusBlacksTurn,
	ChessGameStatusWhiteWins,
	ChessGameStatusBlackWins,
	ChessGameStatusStalemate,
} ChessGameStatus;

typedef enum
{
	ChessPieceTypeWhitePawn,
	ChessPieceTypeWhiteRook,
	ChessPieceTypeWhiteKnight,
	ChessPieceTypeWhiteBishop,
	ChessPieceTypeWhiteQueen,
	ChessPieceTypeWhiteKing,
	ChessPieceTypeBlackPawn,
	ChessPieceTypeBlackRook,
	ChessPieceTypeBlackKnight,
	ChessPieceTypeBlackBishop,
	ChessPieceTypeBlackQueen,
	ChessPieceTypeBlackKing,
	ChessPieceTypeNoPiece,
} ChessPieceType;

#endif

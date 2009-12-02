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
	ChessPieceTypePawn,
	ChessPieceTypeRook,
	ChessPieceTypeKnight,
	ChessPieceTypeBishop,
	ChessPieceTypeQueen,
	ChessPieceTypeKing,
	ChessPieceTypeNoPiece,
} ChessPieceType;

typedef enum
{
	ChessColorWhite,
	ChessColorBlack,
} ChessColor;

#define BOARD_NUM_ROWS 8
#define BOARD_NUM_COLS 8

#endif

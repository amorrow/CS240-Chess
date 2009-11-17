/* Board
 * Implements a chess board.
 */

#ifndef _CS240CHESS_BOARD_H
#define _CS240CHESS_BOARD_H

class Board
{
private:
	std::map<Location, Piece> board;
public:
	Piece at(Location loc);
	ChessPieceType typeAt(Location loc);
};

#endif

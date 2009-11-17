/* Move
 * Represents a single move in the game's history.
 */

#ifndef _CS240CHESS_MOVE_H
#define _CS240CHESS_MOVE_H

class Move
{
private:
	Piece piece;
	Location oldLocation;
	Location newLocation;
	Piece taken;
};

#endif

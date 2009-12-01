/* Location.h
 * Defines a location on the board.
 */

#ifndef _CS240CHESS_LOCATION_H
#define _CS240CHESS_LOCATION_H

class Location
{
	private:
		int row;
		int column;
	public:
		Location();
		Location(int _row, int _col);
		bool operator<(const Location& other) const;
};

#endif


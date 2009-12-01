/* Location.h
 * Defines a location on the board.
 */

#ifndef _CS240CHESS_LOCATION_H
#define _CS240CHESS_LOCATION_H

class Location
{
	private:
		int _row;
		int _column;
	public:
		Location();
		Location(int row, int col);
		bool isValid() const;
		bool operator<(const Location& other) const;
		int row() const;
		int column() const;
};

#endif


/* Location.h
 * Defines a location on the board.
 */

#ifndef _CS240CHESS_LOCATION_H
#define _CS240CHESS_LOCATION_H

#include <boost/shared_ptr.hpp>

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

typedef boost::shared_ptr<Location> LocationPtr;

#endif


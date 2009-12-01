/* Location.cpp
 * Defines a location on the board.
 */

#include "Location.h"

Location::Location() : row(-1), column(-1)
{
}

Location::Location(int _row, int _col) : row(_row), column(_col)
{
}

bool Location::operator<(const Location& other) const
{
	if (row < other.row || (row == other.row && column < other.column))
	{
		return true;
	}
	return false;
}


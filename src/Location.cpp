/* Location.cpp
 * Defines a location on the board.
 */

#include "Location.h"

Location::Location() : _row(-1), _column(-1)
{
}

Location::Location(int row, int col) : _row(row), _column(col)
{
}

bool Location::isValid() const
{
	// TODO implement this
	return true;
}

bool Location::operator<(const Location& other) const
{
	if (_row < other._row || (_row == other._row && _column < other._column))
	{
		return true;
	}
	return false;
}

int Location::row() const
{
	return _row;
}

int Location::column() const
{
	return _column;
}


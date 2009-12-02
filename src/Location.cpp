/* Location.cpp
 * Defines a location on the board.
 */

#include "Location.h"
#include "ChessDefinitions.h"

Location::Location() : _row(-1), _column(-1)
{
}

Location::Location(int row, int col) : _row(row), _column(col)
{
}

bool Location::isValid() const
{
	return _row >= 0 && _row < BOARD_NUM_ROWS && _column >= 0 && _column < BOARD_NUM_COLS;
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


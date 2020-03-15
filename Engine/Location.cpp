#include "Location.h"

Location::Location(int x_in, int y_in)
	:
	x( x_in ),
	y( y_in )
{
}

Location Location::operator+(const Location& rhs) const
{
	return Location( x + rhs.x , y + rhs.y );
}

Location& Location::operator+=(const Location& rhs)
{
	return *this = *this + rhs;
}

#pragma once

class Location
{
public:
	Location() = default;
	Location( int x_in , int y_in );
	Location operator+ ( const Location& rhs ) const;
	Location& operator+= ( const Location& rhs );
public:
	int x;
	int y;
};
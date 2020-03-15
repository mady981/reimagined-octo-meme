#include "Dud.h"

Dud::Dud(Location& in_loc)
{
	loc = in_loc;
}

void Dud::MovBy(Location& delta_loc)
{
	Vector( delta_loc.x , delta_loc.y );
	
}

#pragma once
#include "Location.h"
#include "Vector.h"
class Dud
{
public:
	Dud( Location& in_loc );
	void MovBy( Location& delta_loc );
	void Draw();
private:
	Location loc;
	Vector vec;
};


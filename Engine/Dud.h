#pragma once
#include "Vector.h"
#include "Sprits.h"
class Dud
{
public:
	Dud( const Vector& pos_in );
	void MovBy( Vector& delta_mov );
	void Draw( Sprite& sp );
private:
	Vector pos;
	Vector mov;
};


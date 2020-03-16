#pragma once
#include "Vector.h"
#include "Sprits.h"
class Enemy
{
public:
	Enemy( Vector& pos_in,Vector& mov_in );
	void MoveBy();
	void Draw( Sprite& sp );
private:
	Vector pos;
	Vector mov;
};


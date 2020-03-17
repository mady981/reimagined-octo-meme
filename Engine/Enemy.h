#pragma once
#include "Vector.h"
#include "Sprits.h"
#include <random>
class Enemy
{
public:
	Enemy() = default;
	void Init( float xPos_in,float yPos_in,float xMov_in,float yMov_in );
	void MoveBy();
	void Draw( Sprite& sp );
private:
	Vector pos;
	Vector mov;
};


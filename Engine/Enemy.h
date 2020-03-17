#pragma once
#include "Vector.h"
#include "Sprits.h"
#include "Dud.h"
#include <random>
class Enemy
{
public:
	Enemy() = default;
	void Init( float xPos_in,float yPos_in,float xMov_in,float yMov_in );
	void MoveBy();
	void Draw( Sprite& sp );
	bool inDud( const Dud& dud );
private:
	Vector pos;
	Vector mov;
};


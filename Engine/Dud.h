#pragma once
#include "Vector.h"
#include "Sprits.h"
class Dud
{
public:
	Dud( const Vector& pos_in,const Vector& mov_in );
	void MovBy( Vector& delta_mov );
	void Draw( Sprite& sp );
	const Vector& getpos() const;
private:
	Vector pos;
	Vector mov;
};


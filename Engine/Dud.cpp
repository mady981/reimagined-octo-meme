#include "Dud.h"

Dud::Dud( const Vector& pos_in )
{
	pos = pos_in;
}

void Dud::MovBy( Vector& delta_mov )
{
	Vector( delta_mov.x,delta_mov.y );
}

void Dud::Draw( Sprite& sp )
{
	sp.SpriteDud( pos );
}

#include "Dud.h"

Dud::Dud( const Vector& pos_in )
{
	pos = pos_in;
}

void Dud::MovBy( Vector& delta_mov )
{
	pos += delta_mov;
}

void Dud::Draw( Sprite& sp )
{
	sp.SpriteDud( pos );
}

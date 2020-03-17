#include "Dud.h"

Dud::Dud( const Vector& pos_in,const Vector& mov_in )
	:
	pos( pos_in ),
	mov( mov_in )
{
}

void Dud::MovBy( Vector& delta_mov )
{	
	mov = delta_mov * 2.0f;
	pos += mov;
}

void Dud::Draw( Sprite& sp )
{
	sp.SpriteDud( pos );
}

const Vector& Dud::getpos() const
{
	return mov;
}

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

void Dud::Draw( Graphics& gfx )
{
	gfx.DrawRectHB( getHitBox(),DudColor );
}

HitBox Dud::getHitBox() const
{
	return HitBox::fromCenter( pos,dimasion,dimasion );
}

HitBox Dud::getSaveZone() const
{
	return HitBox::fromCenter( pos,SaveZone,SaveZone );
}

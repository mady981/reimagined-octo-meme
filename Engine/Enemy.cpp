#include "Enemy.h"

void Enemy::Init( const Vector& pos_in,const Vector& vel_in )
{
	pos = pos_in;
	vel = vel_in;
}

void Enemy::MovBy()
{
	pos += vel;
}

void Enemy::Draw( Graphics& gfx )
{
	gfx.DrawRectHB( GetHitBox(),EnemyColor );
}

bool Enemy::DoWallCollision( const HitBox& walls )
{
	bool collision = false;
	const HitBox hb = GetHitBox();
	if ( hb.left <= walls.left )
	{
		pos.x += ( walls.left - hb.left );
		ReboundX();
		collision = true;
	}
	if ( hb.right >= walls.right )
	{
		pos.x += ( walls.right - hb.right );
		ReboundX();
		collision = true;
	}
	if ( hb.top <= walls.top )
	{
		pos.y += ( walls.top - hb.top );
		ReboundY();
		collision = true;
	}
	if ( hb.bottem >= walls.bottem )
	{
		pos.y += ( walls.bottem - hb.bottem );
		ReboundY();
		collision = true;
	}
	return collision;
}

void Enemy::ReboundX()
{
	vel.x = -vel.x;
}

void Enemy::ReboundY()
{
	vel.y = -vel.y;
}

HitBox Enemy::GetHitBox() const
{
	return HitBox( pos,dimansion,dimansion );
}

const float Enemy::getDimanision() const
{
	return dimansion;
}

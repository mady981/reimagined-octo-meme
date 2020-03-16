#include "Enemy.h"

Enemy::Enemy( Vector& pos_in,Vector& mov_in )
	:
	pos( pos_in ),
	mov( mov_in )
{
}

void Enemy::MoveBy()
{
	if ( pos.x == 0 || pos.x == Graphics::ScreenWidth )
	{
		mov.x * -1;
	}
	if ( pos.y == 0 || pos.y == Graphics::ScreenHeight )
	{
		mov.y * -1;
	}
	pos += mov;
}

void Enemy::Draw( Sprite& sp )
{
	sp.SpriteEnemy( pos );
}

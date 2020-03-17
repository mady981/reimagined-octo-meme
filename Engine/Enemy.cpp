#include "Enemy.h"

void Enemy::Init( float xPos_in,float yPos_in,float xMov_in,float yMov_in )
{
	pos = { xPos_in,yPos_in };
	mov = { xMov_in,yMov_in };
}

void Enemy::MoveBy()
{
	if ( pos.x <= 26 || pos.x >= Graphics::ScreenWidth - 26 )
	{
		mov.x *= -1;
	}
	if ( pos.y <= 26 || pos.y >= Graphics::ScreenHeight - 26 )
	{
		mov.y *= -1;
	}
	pos += mov;
}

void Enemy::Draw( Sprite& sp )
{
	sp.SpriteEnemy( pos );
}

bool Enemy::inDud( const Dud& dud )
{
	return pos == dud.getpos();
}

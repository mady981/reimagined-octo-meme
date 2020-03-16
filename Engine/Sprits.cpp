#include "Sprits.h"

Sprite::Sprite( Graphics& gfx )
	:
	gfx( gfx )
{
}

void Sprite::SpriteDud( const Vector& vec_in )
{
	gfx.DrawRect( int( vec_in.x ) - DudDim,int( vec_in.y ) - DudDim,int( vec_in.x ) + DudDim,int( vec_in.y ) + DudDim,DudColor );
}

void Sprite::SpriteEnemy( const Vector& vec_in )
{
	gfx.DrawRect( int( vec_in.x ) - EnemyDim,int( vec_in.y ) - EnemyDim,int( vec_in.x ) + EnemyDim,int( vec_in.y ) + EnemyDim,EnemyColor );
}

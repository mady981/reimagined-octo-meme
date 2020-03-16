#pragma once
#include "Graphics.h"
#include "Vector.h"
class Sprite
{
public:
	Sprite( Graphics& gfx );
	void SpriteDud( const Vector& vec_in );
	void SpriteEnemy( const Vector& vec_in );
private:
	static constexpr int DudDim = 10;
	static constexpr int EnemyDim = 15;
	static constexpr Color DudColor = { 255,255,0 };
	static constexpr Color EnemyColor = { 255,0,0 };
private:
	Graphics& gfx;
}; 

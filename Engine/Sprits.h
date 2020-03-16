#pragma once
#include "Graphics.h"
#include "Vector.h"
class Sprite
{
public:
	Sprite( Graphics& gfx );
	void SpriteDud( const Vector& vec_in );
private:
	static constexpr int DudDim = 10;
	static constexpr Color DudColor = { 255,255,0 };
private:
	Graphics& gfx;
}; 

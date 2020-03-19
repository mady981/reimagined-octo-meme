#pragma once
#include "Vector.h"
#include "HitBox.h"
#include "Graphics.h"
class Dud
{
public:
	Dud( const Vector& pos_in,const Vector& mov_in );
	void MovBy( Vector& delta_mov );
	void Draw( Graphics& gfx );
	HitBox getHitBox() const;
	HitBox getSaveZone() const;
private:
	static constexpr float dimasion = 10.0f;
	static constexpr float SaveZone = 100.0f;
	static constexpr Color DudColor = { 255,255,0 };
private:
	Vector pos;
	Vector mov;
};


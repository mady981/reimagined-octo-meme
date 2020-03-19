#pragma once
#include "Vector.h"
#include "HitBox.h"
#include "Dud.h"
#include "Graphics.h"
class Enemy
{
public:
	Enemy() = default;
	void Init( const Vector& pos_in,const Vector& vel_in );
	void MovBy();
	void Draw( Graphics& gfx );
	bool DoWallCollision( const HitBox& walls );
	void ReboundX();
	void ReboundY();
	bool DoDudCollision( const Dud& dud );
	bool DoSpawnCollision( const Dud& dud );
	HitBox GetHitBox() const;
	const float getDimanision() const;
private:
	static constexpr float dimansion = 20.0f;
	static constexpr Color EnemyColor = { 255,0,0 };
private:
	Vector pos;
	Vector vel;
};


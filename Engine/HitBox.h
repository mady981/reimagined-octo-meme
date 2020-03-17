#pragma once
class HitBox
{
public:
	HitBox() = default;
	HitBox( float left_in,float right_in,float top_in,float bottem_in );
	bool operator==( const HitBox& other ) const;
public:
	float left;
	float right;
	float top;
	float bottem;
};


#pragma once
class Vector
{
public:
	Vector() = default;
	Vector( float x_in , float y_in );
	Vector operator+( const Vector& rhs ) const;
	Vector& operator+=( const Vector& rhs );
	Vector operator*( float rhs ) const;
	Vector& operator*=( float rhs );
	float getLength() const;
	float getLengthSq() const;
	Vector& Nomalize();
	Vector getNomalize() const;
public:
	float x;
	float y;
};


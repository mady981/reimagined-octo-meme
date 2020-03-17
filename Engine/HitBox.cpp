#include "HitBox.h"

HitBox::HitBox( float left_in,float right_in,float top_in,float bottem_in )
	:
	left( left_in ),
	right( right_in ),
	top( top_in ),
	bottem( bottem_in )
{
}

bool HitBox::operator==( const HitBox& other ) const
{
	return left > other.right && right < other.left
		&& top > other.bottem && bottem < other.top;
}

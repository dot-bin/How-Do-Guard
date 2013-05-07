#include "Rect.h"

Rect Rect::ONE = Rect(1, 1, 1, 1);
Rect Rect::ZERO = Rect(0, 0, 0, 0);

Rect::Rect( float x, float y, float width, float height )
{
	X = x;
	Y = y;
	Width = width;
	Height = height;
}

Rect::Rect(void)
{
	X = 0;
	Y = 0;
	Width = 0;
	Height = 0;
}

Rect::~Rect(void)
{
}

string Rect::toString( void ) const
{
	stringstream ss;
	ss << "Rect [" << X << ", " << Y << ", " << Width << ", " << Height << "]";
	return ss.str();
}

void Rect::setPos( Vector2 pos )
{ 
	X = pos.X;
	Y = pos.Y;
}

void Rect::setSize( Vector2 size )
{
	Width = size.X;
	Height = size.Y;
}

bool Rect::collides( Rect other )
{
	if ( left() > other.right()  ||
		 top()  > other.bottom() ||
		 other.left() > right()  ||
		 other.top()  > bottom() )
	{
		return false;
	}

	return true;
}

bool Rect::containsPoint( Vector2 point )
{
	if( point.X < left()   ||
		point.X > right()  ||
		point.Y < top()    ||
		point.Y > bottom() )
	{
		return false;
	}

	return true;
}



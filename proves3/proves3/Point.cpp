#include "Point.h"

Point Point::operator=(Point& p)
{
	x = p.x;
	y = p.y;

	return *this;
}
bool Point::operator==(Point& p)const
{
	return (x == p.x && y == p.y) ? true : false;
}
bool Point::operator!=(Point& p)const
{
	return (x == p.x && y == p.y) ? false : true;
}
Point Point::operator+=(Point& p)
{
	x += p.x;
	y += p.y;

	return *this;
}
Point Point::operator-=(Point& p)
{
	x -= p.x;
	y -= p.y;

	return *this;
}
Point Point::operator+(Point& p)const
{
	Point tmp;

	tmp.x = x + p.x;
	tmp.y = y + p.y;

	return tmp;
}
Point Point::operator-(Point& p)const
{
	Point tmp;

	tmp.x = x - p.x;
	tmp.y = y - p.y;

	return tmp;
}

bool Point::IsZero()const
{
	return (x == 0 && y == 0) ? true : false;
}
void Point::SetZero()
{
	x = 0;
	y = 0;
}
void Point::Negate()
{
	x *= (-1);
	y *= (-1);
}
#include "Point.h"
#include <iostream>

Point::Point()
{
	Point::x = 0;
	Point::y = 0;
	Point::z = 0;
}

Point::Point(int x, int y, int z)
{
	Point::x = x;
	Point::y = y;
	Point::z = z;
}

void Point::SetX(int x)
{
	Point::x = x;
}

void Point::SetY(int y)
{
	Point::y = y;
}

void Point::SetZ(int z)
{
	Point::z = z;
}

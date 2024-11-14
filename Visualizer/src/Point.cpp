#include "Point.h"

Point::Point(int x, int y, int z)
	: mX(x), mY(y), mZ(z)
{
}

Point::~Point()
{
}

int Point::X()
{
	return mX;
}

int Point::Y()
{
	return mY;
}

int Point::Z()
{
	return mZ;
}

bool Point::operator<(const Point& other) const
{
	if (mX != other.mX) {
		return mX < other.mX;
	}
	if (mY != other.mY) {
		return mY < other.mY;
	}
	return mZ < other.mZ;
}

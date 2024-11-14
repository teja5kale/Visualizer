#pragma once

class Point
{
	int mX;
	int mY;
	int mZ;

public:
	Point(int x, int y, int z);
	~Point();

	int X();
	int Y();
	int Z();

	bool operator<(const Point& other) const;
};
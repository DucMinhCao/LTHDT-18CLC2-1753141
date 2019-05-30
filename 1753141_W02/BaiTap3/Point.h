#pragma once
class Point
{
private:
	int x;
	int y;
public:
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	double distance(Point another);
};


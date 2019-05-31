#pragma once
class Point
{
private:
	int x;
	int y;
public:
	Point();
	Point(int x, int y);
	Point(const Point& p);
	~Point();
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	double distance(Point another);
};


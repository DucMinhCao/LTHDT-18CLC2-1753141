#pragma once
#include "Point.h"
class Triangle
{
private:
	Point a;
	Point b;
	Point c;
public:
	Triangle();
	Triangle(Point a, Point b, Point c);
	Triangle(const Triangle& t);
	~Triangle();
	void setcanh(int a, int b, int c, int d, int e, int f);
	int checkTriangle();
};

#pragma once
#include "Point.h"
class Triangle
{
private:
	Point a;
	Point b;
	Point c;
public:
	void setcanh(int a, int b, int c, int d, int e, int f);
	int checkTriangle();
};

#pragma once
#include "Triangle.h"
class TrigangleArray
{
private:
	int n;
	Triangle* a;
public:
	TrigangleArray(Triangle *&a, int &n);
	void TriangleType();
};


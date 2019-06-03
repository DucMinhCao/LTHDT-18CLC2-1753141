#pragma once
#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;
class PointArray
{
private:
	int n;
	Point* a;
public:
	PointArray();
	PointArray(Point*& a, int& n);
	PointArray(const PointArray& b);
	~PointArray();
	Point biggestDistance(Point x);
	bool LoadPointArray(const char* path);
};


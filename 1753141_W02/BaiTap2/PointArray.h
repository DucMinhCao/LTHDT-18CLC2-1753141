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
	PointArray(Point *&a, int &n);
	Point biggestDistance(Point x);
};


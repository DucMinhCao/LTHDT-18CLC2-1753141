#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	void input();
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	double distance(Point z);
	void output();
};


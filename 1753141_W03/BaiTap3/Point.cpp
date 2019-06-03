#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point& p)
{
	this->x = p.x;
	this->y = p.y;
}

Point::~Point()
{
}


void Point::setX(int a) {
	x = a;
}

void Point::setY(int b) {
	y = b;
}

int Point::getX() {
	return x;
}

int Point::getY() {
	return y;
}

double Point::distance(Point another) {
	double res = sqrt(pow(x - another.getX(), 2) + pow(y - another.getY(), 2));
	return res;
}
#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;

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
#include "PointArray.h"

PointArray::PointArray()
{
	this->n = 0;
	this->a = NULL;
}

PointArray::PointArray(Point *& a, int& n) {
	this->a = a;
	this->n = n;
}

PointArray::PointArray(const PointArray& b)
{
	this->n = b.n;
	this->a = new Point[n];
	for (int i = 0; i < n; i++) {
		this->a[i] = b.a[i];
	}
}

PointArray::~PointArray()
{
}

Point PointArray::biggestDistance(Point x) {
	int index = 0;
	double max = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].distance(x) > max) {
			max = a[i].distance(x);
			index = i;
		}
	}
	return a[index];
}


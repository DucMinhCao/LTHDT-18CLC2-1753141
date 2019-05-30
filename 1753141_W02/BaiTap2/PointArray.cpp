#include "PointArray.h"

PointArray::PointArray(Point *& a, int& n) {
	this->a = a;
	this->n = n;
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


#include "Point.h"
#include "PointArray.h"
#include <fstream>

int main() {
	PointArray b;
	b.LoadPointArray("test.txt");
	Point c;
	Point longestDistance;
	c.input();
	longestDistance = b.biggestDistance(c);
	cout << "Longest Distance Point From The Input point is : " << endl;
	longestDistance.output();
	system("pause");
	return 0;
}
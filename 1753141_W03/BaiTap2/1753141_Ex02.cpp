#include "Point.h"
#include "PointArray.h"
#include <fstream>

bool load2Int(const char* path, Point*& a, int& n) {
	ifstream fin;
	fin.open(path);
	if (fin.is_open() == false) {
		return false;
	}
	fin >> n;
	a = new Point[n];
	for (int i = 0; i < n; i++) {
		int x;
		int y;
		fin >> x;
		fin >> y;
		a[i].setX(x);
		a[i].setY(y);
	}
	return true;
}

int main() {
	Point* a;
	int n;
	bool ans = true;

	ans = load2Int("test.txt", a, n);
	if (ans == false) {
		return 0;
	}

	PointArray b(a, n);
	Point c;
	Point longestDistance;
	c.input();
	longestDistance = b.biggestDistance(c);
	cout << "Longest Distance Point From The Input point is : " << endl;
	longestDistance.output();
	system("pause");
	return 0;
}
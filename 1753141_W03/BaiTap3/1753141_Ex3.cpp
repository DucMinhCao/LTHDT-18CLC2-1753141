#include "TrigangleArray.h"
#include <iostream>
#include "fstream"
using namespace std;

bool loadArray(const char* path, Triangle*& a, int& n) {
	ifstream fin;
	fin.open(path);
	if (fin.is_open() == false) {
		return false;
	}
	fin >> n;
	a = new Triangle[n];
	for (int i = 0; i < n; i++) {
		int c, d, e, f, g, h;
		fin >> c;
		fin >> d;
		fin >> e;
		fin >> f;
		fin >> g;
		fin >> h;
		a[i].setcanh(c, d, e, f, g, h);
	}
}

int main() {
	int n;
	Triangle* a;
	bool ans = true;

	ans = loadArray("test.txt", a, n);
	TrigangleArray b(a, n);
	b.TriangleType();
	system("pause");
	return 0;
}
#include "TrigangleArray.h"
#include <iostream>
#include "fstream"
using namespace std;

int main() {
	TrigangleArray b;
	b.LoadTriangleArray("test.txt");
	b.TriangleType();
	system("pause");
	return 0;
}
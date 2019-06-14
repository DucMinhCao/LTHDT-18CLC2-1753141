#include "IntArray.h"
#include <iostream>
using namespace std;

void main()
{
	// Using dynamic allocated array
	IntArray m1;
	IntArray m2(7);
	int *a;
	int n = 7;
	a = new int[7];
	for (int i = 0; i < n; i++)
	{
		a[i] = i * 2 / 7;
	}
	IntArray m3(a, n);
	IntArray m4(m2);
	IntArray m5;
	m5 = m2;

	cin >> m2;
	cout << m2 << endl;

	cout << m3[6] << endl;
	m3[6] = 1;

	cout << m4 << endl;
}
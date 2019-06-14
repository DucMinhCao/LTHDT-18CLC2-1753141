#pragma once
#include <iostream>
using namespace std;
class IntArray
{
private:
	int n;
	int* a;
public:
	IntArray();
	IntArray(const int& n);
	IntArray(int*& a, const int& n);
	IntArray(const IntArray*& a);
	IntArray& operator=(IntArray*& src);
	friend std::istream& operator >>(std::istream& in, const IntArray& a);
	friend std::ostream& operator <<(std::ostream& out, const IntArray& a);
	int& operator[](int n);
};


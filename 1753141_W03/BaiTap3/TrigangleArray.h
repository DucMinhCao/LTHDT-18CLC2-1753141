#pragma once
#include "Triangle.h"
class TrigangleArray
{
private:
	int n;
	Triangle* a;
public:
	TrigangleArray();
	TrigangleArray(Triangle *&a, int &n);
	TrigangleArray(const TrigangleArray& t);
	~TrigangleArray();
	void TriangleType();
	bool LoadTriangleArray(const char* path);
};


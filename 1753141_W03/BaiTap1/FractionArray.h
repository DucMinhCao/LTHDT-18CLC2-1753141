#pragma once
#include "Fraction.h"
class FractionArray
{
private:
	int n;
	Fraction* a;
public:
	FractionArray();
	FractionArray(Fraction*& a, int& n);
	FractionArray(const FractionArray& source);
	~FractionArray();
	void Input();
	void Output();
	Fraction FindSum();
	Fraction FindMax();
	Fraction FindMin();
	void Sort();
	bool LoadFractionArray(const char* path);
};


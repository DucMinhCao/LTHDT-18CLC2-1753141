#pragma once
#include <iostream>
#include <fstream>
#include "Fraction.h"
using namespace std;

class FractionArray
{
private:
	int n;
	Fraction* Fraction;
public:
	FractionArray();
	FractionArray(int& n, Fraction* ps);
	FractionArray(const FractionArray &Fraction);
	~FractionArray();
	void Input();
	void Display();
	Fraction FindSum();
	Fraction FindMax();
	Fraction FindMin();
	void Sort();
	bool LoadFractionArray(const char* path, Fraction*& a, int &n);
};


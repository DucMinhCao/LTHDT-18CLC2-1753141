#pragma once
#include <iostream>
using namespace std;
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int a, int b);
	Fraction(const Fraction& p);
	~Fraction();
	void SetNumerator(int numerator);
	void SetDenominator(int denominator);
	int GetNumerator();
	int GetDenominator();
	int Gcd(int a, int b);
	bool Compare(Fraction ps);
	void Input();
	void Output();
	void Swap(Fraction& ps);
	Fraction Add(Fraction ps);
};


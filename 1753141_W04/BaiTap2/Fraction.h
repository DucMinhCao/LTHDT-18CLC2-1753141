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
	void Input();
	void Output();


	//Operator overloading boook
	// keep + - in globaly
	Fraction operator+(Fraction& b);
	Fraction operator-(Fraction& b);
	Fraction operator*(Fraction& b);
	Fraction operator/(Fraction& b);

	bool operator==(const Fraction& b);
	bool operator!=(const Fraction& b);
	bool operator>=(const Fraction& b);
	bool operator<=(const Fraction& b);
	bool operator>(const Fraction& b);
	bool operator<(const Fraction& b);

	Fraction& operator+=(const Fraction& source);
	Fraction& operator-=(const Fraction& source);
	Fraction& operator*=(const Fraction& source);
	Fraction& operator/=(const Fraction& source);

	friend Fraction& operator+(const Fraction &a , int b);
	friend Fraction& operator+(const int a, const Fraction& b);
	friend Fraction& operator-(const Fraction& a, int b);
	friend Fraction& operator*(const int a, const Fraction& b);

	Fraction operator++(); //prefix
	Fraction operator++(int a); //postfix
	Fraction operator--();
	Fraction operator--(int a);

	void reduce();

	explicit operator float() const;
	friend std::ostream& operator <<(std::ostream& out, const Fraction& b);
};
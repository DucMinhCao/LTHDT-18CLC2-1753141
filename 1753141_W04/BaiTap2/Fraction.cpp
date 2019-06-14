#include "Fraction.h"

Fraction::Fraction()
{
	this->numerator = 0;
	this->denominator = 1;
}

Fraction::Fraction(int a, int b)
{
	this->numerator = a;
	if (b == 0 && a != 0) {
		cout << "Mau so khong the bang 0";
	}
	else {
		this->denominator = b;
	}
}

Fraction::Fraction(const Fraction& p)
{
	this->numerator = p.numerator;
	this->denominator = p.denominator;
}

Fraction::~Fraction()
{
}

void Fraction::Input() {
	cout << "Nhap tu so : " << endl;
	cin >> numerator;
	cout << "Nhap mau so : " << endl;
	cin >> denominator;
}

int Fraction::GetNumerator() {
	return numerator;
}

int Fraction::GetDenominator() {
	return denominator;
}

void Fraction::SetDenominator(int denominator) {
	this->denominator = denominator;
}

void Fraction::SetNumerator(int numerator) {
	this->numerator = numerator;
}

void Fraction::Output() {
	cout << this->numerator << "/" << this->denominator << endl;
}

Fraction Fraction::operator+(Fraction& b)
{
	numerator = numerator * b.denominator + b.numerator * denominator;
	denominator = denominator * b.denominator;
	this->reduce();
	return *this;
}

Fraction Fraction::operator-(Fraction& b) {
	numerator = numerator * b.denominator - b.numerator * denominator;
	denominator = denominator * b.denominator;
	this->reduce();
	return *this;
}

Fraction Fraction::operator*(Fraction& b) {
	numerator = numerator * b.numerator;
	denominator = denominator * b.denominator;
	this->reduce();
	return *this;
}

Fraction Fraction::operator/(Fraction& b) {
	numerator = numerator * b.denominator;
	denominator = denominator * b.numerator;
	return *this;
}

bool Fraction::operator==(const Fraction& b) {
	return (numerator == b.numerator) && (denominator == b.denominator);
}

bool Fraction::operator!=(const Fraction& b) {
	return (numerator != b.numerator) || (denominator != b.denominator);
}

bool Fraction::operator>=(const Fraction& b) {
	if ((denominator < 0 || numerator < 0) && ((b.denominator > 0) && (b.numerator > 0))) {
		return false;
	}
	else if ((b.denominator < 0 || b.numerator < 0) && ((numerator > 0) && (denominator > 0))) {
		return true;
	}
	return (numerator * b.denominator) >= (b.numerator * denominator);
}

bool Fraction::operator<=(const Fraction& b) {
	if ((denominator < 0 || numerator < 0) && ((b.denominator > 0) && (b.numerator > 0))) {
		return false;
	}
	else if ((b.denominator < 0 || b.numerator < 0) && ((numerator > 0) && (denominator > 0))) {
		return true;
	}
	return (numerator * b.denominator) <= (b.numerator * denominator);
}

bool Fraction::operator>(const Fraction& b) {
	if ((denominator < 0 || numerator < 0) && ((b.denominator > 0) && (b.numerator > 0))) {
		return false;
	}
	else if ((b.denominator < 0 || b.numerator < 0) && ((numerator > 0) && (denominator > 0))) {
		return true;
	}
	return (numerator * b.denominator) > (b.numerator * denominator);
}

bool Fraction::operator<(const Fraction& b) {
	if ((denominator < 0 || numerator < 0) && ((b.denominator > 0) && (b.numerator > 0))) {
		return false;
	}
	else if ((b.denominator < 0 || b.numerator < 0) && ((numerator > 0) && (denominator > 0))){
		return true;
	}
	return (numerator * b.denominator) < (b.numerator * denominator);
}

Fraction& Fraction::operator+=(const Fraction& source)
{
	this->numerator = this->numerator * source.denominator + source.numerator * this->denominator;
	this->denominator = this->denominator * source.denominator;
	this->reduce();
	return *this;
}

Fraction& Fraction::operator-=(const Fraction& source)
{
	this->numerator = this->numerator * source.denominator - source.numerator * this->denominator;
	this->denominator = this->denominator * source.denominator;
	this->reduce();
	return *this;
}

Fraction& Fraction::operator*=(const Fraction& source)
{
	this->numerator = this->numerator * source.numerator;
	this->denominator = this->denominator * source.denominator;
	this->reduce();
	return *this;
}

Fraction& Fraction::operator/=(const Fraction& source)
{
	this->numerator = this->numerator * source.denominator;
	this->denominator = this->denominator * source.numerator;
	this->reduce();
	return *this;
}

Fraction& operator+(const Fraction& a, int b)
{
	Fraction result;
	result.numerator = a.numerator + b * a.denominator;
	result.denominator = a.denominator;
	result.reduce();
	return result;
}

Fraction& operator+(const int a, const Fraction& b)
{
	Fraction result;
	result.numerator = a * b.denominator + b.numerator;
	result.denominator = b.denominator;
	result.reduce();
	return result;
}

Fraction& operator-(const Fraction& a, int b)
{
	Fraction result;
	result.numerator = a.numerator - b * a.denominator;
	result.denominator = a.denominator;
	result.reduce();
	return result;
}

Fraction& operator*(const int a, const Fraction& b)
{
	Fraction result;
	result.numerator = a * b.numerator;
	result.denominator = b.denominator;
	result.reduce();
	return result;
}

Fraction Fraction::operator++()
{
	this->numerator = this->numerator + this->denominator;
	this->reduce();
	return *this;
}

Fraction Fraction::operator++(int a) //postfix, why couldnt i return a reference here ? because t is a local var, if we return a ref to a local var, we got big problem. out of this function t will be gone by destructor
// why int a ??? can we have double a here, float ? 
{
	Fraction temp = *this;
	this->numerator = this->numerator + this->denominator;
	temp.reduce();
	return temp;
}

Fraction Fraction::operator--()
{
	this->numerator = this->numerator - this->denominator;
	this->reduce();
	return *this;
}

Fraction Fraction::operator--(int a)
{
	Fraction temp = *this;
	this->numerator = this->numerator - this->denominator;
	temp.reduce();
	return temp;
}

Fraction::operator float() const
{
	return (float)this->numerator / this->denominator;
}

std::ostream& operator<<(std::ostream& out, const Fraction& b)
{
	out << b.numerator << "/" << b.denominator << endl;
	return out;
}

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

void Fraction::reduce() {
	int gcd1 = gcd(numerator, denominator);
	this->numerator = this->numerator / gcd1;
	this->denominator = this->denominator / gcd1;
}




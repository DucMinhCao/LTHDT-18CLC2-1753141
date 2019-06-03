#include "FractionArray.h"
#include <fstream>

FractionArray::FractionArray()
{
	this->n = 0;
	this->a = nullptr;
}

FractionArray::FractionArray(Fraction*& a, int& n)
{
	this->n = n;
	this->a = a;
}

FractionArray::FractionArray(const FractionArray& source)
{
	this->n = source.n;
	this->a = new Fraction[n];
	for (int i = 0; i < n; i++) {
		this->a[i] = source.a[i];
	}
}

FractionArray::~FractionArray()
{
}

void FractionArray::Input()
{
	this->a = new Fraction[this->n];
	for (int i = 0; i < n; i++) {
		this->a[i].Input();
	}
}

void FractionArray::Output()
{
	for (int i = 0; i < this->n; i++) {
		this->a[i].Output();
	}
}

Fraction FractionArray::FindSum()
{
	Fraction sum(0, 0);
	for (int i = 0; i < n; i++) {
		sum = sum.Add(this->a[i]);
	}
	return sum;
}

Fraction FractionArray::FindMax()
{
	Fraction max(0, 0);
	max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i].Compare(max)) {
			max = a[i];
		}
	}
	return max;
}

Fraction FractionArray::FindMin()
{
	Fraction min(0, 0);
	min = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i].Compare(min) == 0) {
			min = a[i];
		}
	}
	return min;
}

void FractionArray::Sort()
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j].Compare(a[j + 1])) {
				a[j].Swap(a[j + 1]);
			}
		}
	}
}

bool FractionArray::LoadFractionArray(const char* path)
{
	ifstream fin;
	fin.open(path);
	if (fin.is_open() == false) {
		fin.close();
		return false;
	}
	fin >> this->n;
	this->a = new Fraction[this->n];
	int num, deno;
	for (int i = 0; i < n; i++) {
		fin >> num;
		fin >> deno;
		a[i].SetNumerator(num);
		a[i].SetDenominator(deno);
	}
	fin.close();
	return true;
}

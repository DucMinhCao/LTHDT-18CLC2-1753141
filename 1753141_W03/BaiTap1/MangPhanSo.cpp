#include "FractionArray.h"


FractionArray::FractionArray()
{
	this->n = 0;
	this->Fraction = NULL;
}

FractionArray::FractionArray(int& n, Fraction* ps)
{
	this->n = n;
	this->Fraction = ps;
}

FractionArray::FractionArray(const FractionArray &Fraction)
{
	this->n = Fraction.n;
	this->Fraction = new Fraction[n];
	for (int i = 0; i < n; i++) {
		this->Fraction[i] = Fraction.Fraction[i];
	}
}

FractionArray::~FractionArray()
{
}

void FractionArray::input() {
	Fraction = new Fraction[n];
	for (int i = 0; i < n; i++) {
		Fraction[i].input();
	}
}

void FractionArray::display() {
	for (int i = 0; i < n; i++) {
		cout << Fraction[i].getTu() << "/" << Fraction[i].getMau() << endl;
	}
}

Fraction FractionArray::findsum() {
	Fraction sum;
	sum.setTu(0);
	sum.setMau(0);

	for (int i = 0; i < n; i++) {
		sum = sum.add(Fraction[i]);
	}
	return sum;
}

Fraction FractionArray::findmax() {
	Fraction max = Fraction[0];
	for (int i = 0; i < n; i++) {
		if (Fraction[i].soSanh(max)) {
			max = Fraction[i];
		}
	}
	return max;
}

Fraction FractionArray::findmin() {
	Fraction min = Fraction[0];
	for (int i = 0; i < n; i++) {
		if (Fraction[i].soSanh(min) == 0) {
			min = Fraction[i];
		}
	}
	return min;
}

void FractionArray::sort() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (Fraction[j].soSanh(Fraction[j + 1])) {
				Fraction[j].swap(Fraction[j + 1]);
			}
		}
	}
}

bool FractionArray::loadFractionArray(const char* path, Fraction*& a, int &n)
{
	ifstream fin;
	fin.open(path);
	if (fin.is_open() == false) {
		return false;
	}
	fin >> n;
	a = new Fraction[n];
	int numerator = 0;
	int denominator = 0;
	for (int i = 0; i < n; i++) {
		fin >> numerator;
		fin >> denominator;
		a[i].setTu(numerator);
		a[i].setMau(denominator);
	}

	this->n = n;
	this->Fraction = a;
	fin.close();
	return true;

}

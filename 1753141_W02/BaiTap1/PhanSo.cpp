#include "PhanSo.h"


void PhanSo::input() {
	cout << "Nhap tu so : " << endl;
	cin >> tuSo;
	cout << "Nhap mau so : " << endl;
	cin >> mauSo;
}

int PhanSo::getTu() {
	return tuSo;
}

int PhanSo::getMau() {
	return mauSo;
}

void PhanSo::setMau(int mauso) {
	mauSo = mauso;
}

void PhanSo::setTu(int tuso) {
	tuSo = tuso;
}

int PhanSo::gcd(int a, int b) {
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}


void PhanSo::xuat() {
	cout << this->tuSo << "/" << this->mauSo << endl;
}


bool PhanSo::soSanh(PhanSo ps) {
	int a = this->tuSo;
	int b = this->mauSo;
	int rutgon = gcd(a, b);
	a /= rutgon;
	b /= rutgon;
	int c = ps.tuSo;
	int d = ps.mauSo;
	int rutgon2 = gcd(c, d);
	c /= rutgon2;
	d / rutgon2;

	int compare = a * d - b * c;

	if (compare > 0) {
		return 1;
	}
	else {
		return 0;
	}
}


PhanSo PhanSo::add(PhanSo ps) {
	if (mauSo == 0 && tuSo == 0)
	{
		mauSo = ps.mauSo;
		tuSo = ps.tuSo;
		return *this;
	}
	else 
	{
		tuSo = tuSo * ps.mauSo + ps.tuSo * mauSo;
		mauSo = mauSo * ps.mauSo;
		return *this;
	}
}

void PhanSo::swap(PhanSo& ps) {
	PhanSo temp;
	temp = *this;
	tuSo = ps.tuSo;
	mauSo = ps.mauSo;
	ps.tuSo = temp.tuSo;
	ps.mauSo = temp.mauSo;
}


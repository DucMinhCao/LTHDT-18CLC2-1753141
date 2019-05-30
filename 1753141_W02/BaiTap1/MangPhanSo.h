#pragma once
#include <iostream>
#include "PhanSo.h"
using namespace std;

class MangPhanSo
{
private:
	int n;
	PhanSo* phanSo;
public:
	MangPhanSo(int& n, PhanSo* ps) {
		this->n = n;
		this->phanSo = ps;
	}
	void input();
	void display();
	PhanSo findsum();
	PhanSo findmax();
	PhanSo findmin();
	void sort();
	
};


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
	MangPhanSo();
	MangPhanSo(int& n, PhanSo* ps);
	MangPhanSo(const MangPhanSo &phanSo);
	~MangPhanSo();
	void input();
	void display();
	PhanSo findsum();
	PhanSo findmax();
	PhanSo findmin();
	void sort();
	
};


#pragma once
#include <iostream>
#include <string>
using namespace std;
class GiaoVien
{
private:
	string id;
	string hoten;
	int hesoluong;
	int luongcoban;
	int songaynghi;
public:
	GiaoVien();
	GiaoVien(string id);
	GiaoVien(string id, string hoten);
	GiaoVien(string id, string hoten, int hesoluong);
	GiaoVien(string id, string hoten, int hesoluong, int luongcoban);
	GiaoVien(string id, string hoten, int hesoluong, int luongcoban, int songaynghi);
	void input();
	void output();
	int tinhluong();
	~GiaoVien();
};


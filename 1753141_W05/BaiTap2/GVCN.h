#pragma once
#include "GiaoVien.h"
class GVCN : public GiaoVien
{
private:
	string tenlopchunhiem;
	int phucapchunhiem = 500000;
public:
	GVCN();
	GVCN(string id);
	GVCN(string id, string hoten);
	GVCN(string id, string hoten, int hesoluong);
	GVCN(string id, string hoten, int hesoluong, int luongcoban);
	GVCN(string id, string hoten, int hesoluong, int luongcoban, int songaynghi);
	GVCN(string id, string hoten, int hesoluong, int luongcoban, int songaynghi, string tenlopchunhiem);
	void input();
	void output();
	int tinhluong();
	~GVCN();
};



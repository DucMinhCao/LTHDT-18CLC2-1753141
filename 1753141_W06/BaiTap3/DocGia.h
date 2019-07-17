#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class DocGia
{
private:
	string id;
	string hoten;
	Date ngayhethan;
	string gioitinh;
public:
	DocGia();
	DocGia(string id);
	DocGia(string id, string hoten);
	DocGia(string id, string hoten, Date ngayhethan);
	DocGia(string id, string hoten, Date ngayhethan, string gioitinh);
	virtual void input();
	virtual void output();
	virtual int tinhlephi();
	bool yearCompare(int year);
	string getId();
	string getName();
	~DocGia();
};


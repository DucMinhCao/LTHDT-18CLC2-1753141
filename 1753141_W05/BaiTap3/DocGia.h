#pragma once
#include <iostream>
#include <string>
using namespace std;

class DocGia
{
private:
	string id;
	string hoten;
	string ngayhethan;
	string gioitinh;
public:
	DocGia();
	DocGia(string id);
	DocGia(string id, string hoten);
	DocGia(string id, string hoten, string ngayhethan);
	DocGia(string id, string hoten, string ngayhethan, string gioitinh);
	void input();
	void output();
	int tinhlephi();
	~DocGia();
};


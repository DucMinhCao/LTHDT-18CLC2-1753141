#pragma once
#include "NhanVien.h"
class NVSanXuat : public NhanVien 
{
private:
	int soluongsanpham;
public:
	NVSanXuat();
	NVSanXuat(string id);
	NVSanXuat(string id, string name);
	NVSanXuat(string id, string name, Date dob);
	NVSanXuat(string id, string name, Date dob, string address, int numberofproducts);
	void input();
	void output();
	int countsalary();
};


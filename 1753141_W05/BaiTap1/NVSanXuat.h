#pragma once
#include "NhanVien.h"
#include <iostream>
using namespace std;
class NVSanXuat : public NhanVien
{
private:
	int numberofproducts;
	int productvalue = 20000;
public:
	NVSanXuat();
	NVSanXuat(string id);
	NVSanXuat(string id, string name);
	NVSanXuat(string id, string name, string dob);
	NVSanXuat(string id, string name, string dob, string address, int numberofproducts) ;
	void InputProductEmployee();
	void OutputProductEmployee();
	void OutputEmployeeWithSalary();
	int CountSalary();
	~NVSanXuat();
};


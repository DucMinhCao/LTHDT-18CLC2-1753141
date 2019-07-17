#pragma once
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class NhanVien
{
private:
	string id;
	string name;
	Date ngaysinh;
	string address;
public:
	NhanVien();
	NhanVien(string id);
	NhanVien(string id, string name);
	NhanVien(string id, string name, Date dob);
	NhanVien(string id, string name, Date dob, string address);
	virtual void input();
	virtual void output();
	virtual int countsalary();
	string getname();
	string getid();
	Date getdate();
};


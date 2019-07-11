#pragma once
#include <string>
#include <iostream>
using namespace std;

class NhanVien
{
private:
	string id;
	string name;
	string dob;
	string address;
public:
	NhanVien();
	NhanVien(string id);
	NhanVien(string id, string name);
	NhanVien(string id, string name, string dob);
	NhanVien(string id, string name, string dob, string address);
	void InputEmployee();
	void OutputEmployee();
	~NhanVien();
};


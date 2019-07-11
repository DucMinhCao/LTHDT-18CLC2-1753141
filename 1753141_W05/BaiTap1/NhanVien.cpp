#include "NhanVien.h"

NhanVien::NhanVien()
{
}

NhanVien::NhanVien(string id)
{
	this->id = id;
}

NhanVien::NhanVien(string id, string name)
{
	this->id = id;
	this->name = name;
}

NhanVien::NhanVien(string id, string name, string dob)
{
	this->id = id;
	this->name = name;
	this->dob = dob;
}

NhanVien::NhanVien(string id, string name, string dob, string address)
{
	this->id = id;
	this->name = name;
	this->dob = dob;
	this->address = address;
}

void NhanVien::InputEmployee()
{
	cout << "Enter Employee ID : " << endl;
	getline(cin, this->id);
	cin.ignore();
	cout << "Enter Employee Name : " << endl;
	getline(cin, this->name);	
	cin.ignore();
	cout << "Enter Employee DOB : " << endl;
	getline(cin, this->dob);
	cin.ignore();
	cout << "Enter Employee Address : " << endl;
	getline(cin, this->address);
}

void NhanVien::OutputEmployee()
{
	cout << "Employee id : " << this->id << endl;
	cout << "Employee name : " << this->name << endl;
	cout << "Employee DOB : " << this->dob << endl;
	cout << "Employee address : " << this->address << endl;
}

NhanVien::~NhanVien()
{
}

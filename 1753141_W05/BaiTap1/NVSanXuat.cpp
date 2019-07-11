#include "NVSanXuat.h"

NVSanXuat::NVSanXuat()
{
}

NVSanXuat::NVSanXuat(string id) : NhanVien(id)
{
}

NVSanXuat::NVSanXuat(string id, string name) : NhanVien(id, name)
{
}

NVSanXuat::NVSanXuat(string id, string name, string dob) : NhanVien(id, name, dob)
{
}

NVSanXuat::NVSanXuat(string id, string name, string dob, string address, int numberofproducts) : NhanVien(id, name, dob, address)
{
		this->numberofproducts = numberofproducts;
}

void NVSanXuat::InputProductEmployee()
{
	NhanVien::InputEmployee();
	cout << "Input Number Of Products : " << endl;
	cin >> this->numberofproducts;
}

void NVSanXuat::OutputProductEmployee()
{
	NhanVien::OutputEmployee();
	cout << "Employee Products : " << this->numberofproducts << endl;
}

void NVSanXuat::OutputEmployeeWithSalary()
{
	NhanVien::OutputEmployee();
	cout << "Employee Products : " << this->numberofproducts << endl;
	cout << "Employee Salary : " << this->CountSalary() << endl;
}

int NVSanXuat::CountSalary()
{
	return this->numberofproducts * this->productvalue;
}

NVSanXuat::~NVSanXuat()
{

}


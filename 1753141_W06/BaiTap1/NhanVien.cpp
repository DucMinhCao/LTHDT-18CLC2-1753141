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

NhanVien::NhanVien(string id, string name, Date dob)
{
	this->id = id;
	this->name = name;
	this->ngaysinh = dob;
}

NhanVien::NhanVien(string id, string name, Date dob, string address)
{
	this->id = id;
	this->name = name;
	this->ngaysinh = dob;
	this->address = address;
}


void NhanVien::input()
{
	cout << "Nhap ma nhan vien : ";
	getline(cin >> ws, id);
	cout << "Nhap ten : ";
	getline(cin >> ws, name);
	cout << "Nhap ngay sinh : ";
	cin >> ngaysinh;
	cout << "Nhap dia chi : ";
	getline(cin >> ws, address);
}

void NhanVien::output()
{
	cout << "ID : " << id << endl;
	cout << "Ho ten : " << name << endl;
	cout << "Ngay sinh : " << ngaysinh << endl;
	cout << "Dia chi : " << address << endl;
	cout << "Luong : " << countsalary() << endl;
}

int NhanVien::countsalary()
{
	return 0;
}

string NhanVien::getname()
{
	return name;
}

string NhanVien::getid() {
	return id;
}

Date NhanVien::getdate()
{
	return ngaysinh;
}

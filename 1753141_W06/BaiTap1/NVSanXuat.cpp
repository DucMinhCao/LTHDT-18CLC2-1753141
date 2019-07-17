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

NVSanXuat::NVSanXuat(string id, string name, Date dob) : NhanVien(id, name, dob)
{
}

NVSanXuat::NVSanXuat(string id, string name, Date dob, string address, int numberofproducts) : NhanVien(id, name, dob, address)
{
	this->soluongsanpham = numberofproducts;
}


void NVSanXuat::input()
{
	NhanVien::input();
	cout << "Nhap so san pham : ";
	cin >> soluongsanpham;
}

void NVSanXuat::output()
{
	NhanVien::output();
	cout << "So san pham : " << soluongsanpham << endl;
}

int NVSanXuat::countsalary()
{
	return soluongsanpham * 20000;
}

#include "NVCongNhat.h"

NVCongNhat::NVCongNhat()
{
}

NVCongNhat::NVCongNhat(string id) : NhanVien(id)
{
}

NVCongNhat::NVCongNhat(string id, string name) : NhanVien(id, name)
{
}

NVCongNhat::NVCongNhat(string id, string name, Date dob) : NhanVien(id, name, dob)
{
}

NVCongNhat::NVCongNhat(string id, string name, Date dob, string address, int dayofwork) : NhanVien(id, name, dob, address)
{
	this->ngaylamviec = dayofwork;
}

void NVCongNhat::input()
{
	NhanVien::input();
	cout << "Nhap so ngay lam viec : " << endl;
	cin >> ngaylamviec;
}

void NVCongNhat::output()
{
	NhanVien::output();
	cout << "So ngay lam viec la : " << ngaylamviec << endl;
}

int NVCongNhat::countsalary()
{
	return ngaylamviec * 300000;
}

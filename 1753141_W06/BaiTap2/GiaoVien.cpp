#include "GiaoVien.h"

#include "GiaoVien.h"

GiaoVien::GiaoVien()
{
}

GiaoVien::GiaoVien(string id)
{
	this->id = id;
}

GiaoVien::GiaoVien(string id, string hoten)
{
	this->id = id;
	this->hoten = hoten;
}

GiaoVien::GiaoVien(string id, string hoten, int hesoluong)
{
	this->id = id;
	this->hoten = hoten;
	this->hesoluong = hesoluong;
}

GiaoVien::GiaoVien(string id, string hoten, int hesoluong, int luongcoban)
{
	this->id = id;
	this->hoten = hoten;
	this->hesoluong = hesoluong;
	this->luongcoban = luongcoban;
}

GiaoVien::GiaoVien(string id, string hoten, int hesoluong, int luongcoban, int songaynghi)
{
	this->id = id;
	this->hoten = hoten;
	this->hesoluong = hesoluong;
	this->luongcoban = luongcoban;
	this->songaynghi = songaynghi;
}

void GiaoVien::input()
{
	cout << "Nhap id giao vien : " << endl;
	getline(cin >> ws, this->id);
	cout << "Nhap ho ten giao vien : " << endl;
	getline(cin >> ws, this->hoten);
	cout << "Nhap he so luong giao vien : " << endl;
	cin >> hesoluong;
	cout << "Nhap luong can ban giao vien : " << endl;
	cin >> luongcoban;
	cout << "Nhap so ngay nghi : " << endl;
	cin >> songaynghi;
}

void GiaoVien::output()
{
	cout << "ID : " << this->id << endl;
	cout << "Ho ten giao vien : " << this->hoten << endl;
	cout << "He so luong : " << this->hesoluong << endl;
	cout << "Luong can ban : " << this->luongcoban << endl;
	cout << "So ngay nghi : " << this->songaynghi << endl;
}

int GiaoVien::tinhluong()
{
	return this->luongcoban * this->hesoluong - (100000 * this->songaynghi);
}

GiaoVien::~GiaoVien()
{
}

int GiaoVien::getSoNgayNghi()
{
	return songaynghi;;
}

string GiaoVien::getId()
{
	return id;
}

string GiaoVien::getName()
{
	return hoten;
}

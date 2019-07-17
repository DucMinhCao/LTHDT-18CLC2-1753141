#include "DocGiaThuong.h"

#include "DocGiaThuong.h"

DocGiaThuong::DocGiaThuong()
{
}

DocGiaThuong::DocGiaThuong(string id) : DocGia(id)
{
}

DocGiaThuong::DocGiaThuong(string id, string hoten) : DocGia(id, hoten)
{
}

DocGiaThuong::DocGiaThuong(string id, string hoten, Date ngayhethan) : DocGia(id, hoten, ngayhethan)
{
}

DocGiaThuong::DocGiaThuong(string id, string hoten, Date ngayhethan, string gioitinh) : DocGia(id, hoten, ngayhethan, gioitinh)
{
}

DocGiaThuong::DocGiaThuong(string id, string hoten, Date ngayhethan, string gioitinh, int sosachmuon) : DocGia(id, hoten, ngayhethan, gioitinh)
{
	this->sosachmuon = sosachmuon;
}

void DocGiaThuong::input()
{
	DocGia::input();
	cout << "Nhap so sach muon trong thang : " << endl;
	cin >> this->sosachmuon;
}

void DocGiaThuong::output()
{
	DocGia::output();
	cout << "So sach muon trong thang la : " << this->sosachmuon << endl;
}

int DocGiaThuong::tinhlephi()
{
	return 5000 * this->sosachmuon;
}

DocGiaThuong::~DocGiaThuong()
{
}
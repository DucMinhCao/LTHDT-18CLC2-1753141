#include "DocGia.h"

DocGia::DocGia()
{
}

DocGia::DocGia(string id)
{
	this->id = id;
}

DocGia::DocGia(string id, string hoten)
{
	this->id = id;
	this->hoten = hoten;
}

DocGia::DocGia(string id, string hoten, string ngayhethan)
{
	this->id = id;
	this->hoten = hoten;
	this->ngayhethan = ngayhethan;
}

DocGia::DocGia(string id, string hoten, string ngayhethan, string gioitinh)
{
	this->id = id;
	this->hoten = hoten;
	this->ngayhethan = ngayhethan;
	this->gioitinh = gioitinh;
}

void DocGia::input()
{
	cout << "Nhap ID doc gia : " << endl;
	getline(cin, this->id);
	cout << "Nhap ho ten doc gia : " << endl;
	getline(cin, this->hoten);
	cout << "Nhap ngay het han : " << endl;
	getline(cin, this->ngayhethan);
	cout << "Nhap gioi tinh doc gia : " << endl;
	getline(cin, this->gioitinh);

}

void DocGia::output()
{
	cout << "ID : " << this->id << endl;
	cout << "Ho ten : " << this->hoten << endl;
	cout << "Ngay het han : " << this->ngayhethan << endl;
	cout << "Gioi tinh : " << this->gioitinh << endl;
}

int DocGia::tinhlephi()
{
	return 0;
}

DocGia::~DocGia()
{
}

#include "GVCN.h"

GVCN::GVCN()
{
}

GVCN::GVCN(string id) : GiaoVien(id)
{
}

GVCN::GVCN(string id, string hoten) : GiaoVien(id, hoten)
{
}

GVCN::GVCN(string id, string hoten, int hesoluong) : GiaoVien(id, hoten, hesoluong)
{
}

GVCN::GVCN(string id, string hoten, int hesoluong, int luongcoban) : GiaoVien(id, hoten, hesoluong, luongcoban)
{
}

GVCN::GVCN(string id, string hoten, int hesoluong, int luongcoban, int songaynghi) : GiaoVien(id, hoten, hesoluong, luongcoban, songaynghi)
{
}

GVCN::GVCN(string id, string hoten, int hesoluong, int luongcoban, int songaynghi, string tenlopchunhiem) : GiaoVien(id, hoten, hesoluong, luongcoban, songaynghi)
{
	this->tenlopchunhiem = tenlopchunhiem;
}

void GVCN::input()
{
	GiaoVien::input();
	cout << "Nhap ten lop chu nhiem : " << endl;
	getline(cin, this->tenlopchunhiem);
}

void GVCN::output()
{
	GiaoVien::output();
	cout << "Ten lop chu nhiem : " << this->tenlopchunhiem << endl;
}

int GVCN::tinhluong()
{
	return GiaoVien::tinhluong() + this->phucapchunhiem;
}

GVCN::~GVCN()
{
}

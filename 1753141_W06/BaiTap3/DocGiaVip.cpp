#include "DocGiaVip.h"

DocGiaVip::DocGiaVip()
{
}

DocGiaVip::DocGiaVip(string id) : DocGia(id)
{
}

DocGiaVip::DocGiaVip(string id, string hoten) : DocGia(id, hoten)
{
}

DocGiaVip::DocGiaVip(string id, string hoten, Date ngayhethan) : DocGia(id, hoten, ngayhethan)
{
}

DocGiaVip::DocGiaVip(string id, string hoten, Date ngayhethan, string gioitinh) : DocGia(id, hoten, ngayhethan, gioitinh)
{
}

void DocGiaVip::input()
{
	DocGia::input();
}

void DocGiaVip::output()
{
	DocGia::output();
}

int DocGiaVip::tinhlephi()
{
	return 50000;
}

DocGiaVip::~DocGiaVip()
{
}
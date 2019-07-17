#pragma once
#include "DocGia.h"
class DocGiaThuong : public DocGia
{
private:
	int sosachmuon;
public:
	DocGiaThuong();
	DocGiaThuong(string id);
	DocGiaThuong(string id, string hoten);
	DocGiaThuong(string id, string hoten, Date ngayhethan);
	DocGiaThuong(string id, string hoten, Date ngayhethan, string gioitinh);
	DocGiaThuong(string id, string hoten, Date ngayhethan, string gioitinh, int sosachmuon);
	void input();
	void output();
	int tinhlephi();
	~DocGiaThuong();
};
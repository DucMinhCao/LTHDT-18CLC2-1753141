#pragma once
#include "DocGia.h"
class DocGiaVip :
	public DocGia
{
public:
	DocGiaVip();
	DocGiaVip(string id);
	DocGiaVip(string id, string hoten);
	DocGiaVip(string id, string hoten, Date ngayhethan);
	DocGiaVip(string id, string hoten, Date ngayhethan, string gioitinh);
	void input();
	void output();
	int tinhlephi();
	~DocGiaVip();
};
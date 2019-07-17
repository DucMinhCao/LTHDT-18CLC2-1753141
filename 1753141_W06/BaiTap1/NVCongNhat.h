#pragma once
#include "NhanVien.h"
class NVCongNhat : public NhanVien
{
private:
	int ngaylamviec;
public:
	NVCongNhat();
	NVCongNhat(string id);
	NVCongNhat(string id, string name);
	NVCongNhat(string id, string name, Date dob);
	NVCongNhat(string id, string name, Date dob, string address, int dayofwork);
	void input();
	void output();
	int countsalary();
};


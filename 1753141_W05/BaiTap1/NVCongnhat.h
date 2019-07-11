#pragma once
#include "NhanVien.h"
class NVCongnhat :
	public NhanVien
{
private:
	int daysofwork;
	int salaryperday = 300000;
public:
	NVCongnhat();
	NVCongnhat(string id);
	NVCongnhat(string id, string name);
	NVCongnhat(string id, string name, string dob);
	NVCongnhat(string id, string name, string dob, string address, int dayofwork);
	void InputNormalEmployee();
	void OutputNormalEmployee();
	void OutputEmployeeWithSalary();
	int CountSalary();
	~NVCongnhat();
};


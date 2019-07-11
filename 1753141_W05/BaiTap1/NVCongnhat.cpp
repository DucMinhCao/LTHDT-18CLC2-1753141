#include "NVCongnhat.h"

NVCongnhat::NVCongnhat()
{
}

NVCongnhat::NVCongnhat(string id) : NhanVien(id)
{
}

NVCongnhat::NVCongnhat(string id, string name) : NhanVien(id,name)
{
}

NVCongnhat::NVCongnhat(string id, string name, string dob) : NhanVien(id, name, dob)
{
}

NVCongnhat::NVCongnhat(string id, string name, string dob, string address, int dayofwork) : NhanVien(id, name, dob, address)
{
	this->daysofwork = dayofwork;
}

void NVCongnhat::InputNormalEmployee()
{
	cin.ignore();
	NhanVien::InputEmployee();
	cout << "Input Day Of Work : " << endl;
	cin >> this->daysofwork;
}

void NVCongnhat::OutputNormalEmployee()
{
	NhanVien::OutputEmployee();
	cout << "Employee's Day Of Work : " << this->daysofwork << endl;
}

void NVCongnhat::OutputEmployeeWithSalary()
{
	this->OutputNormalEmployee();
	cout << "Employee's Salary : " << CountSalary() << endl;
}

int NVCongnhat::CountSalary()
{
	return this->daysofwork * this->salaryperday;
}

NVCongnhat::~NVCongnhat()
{
}

#include "CongTy.h"

CongTy::CongTy()
{
}

CongTy::~CongTy()
{
	for (int i = 0; i < nhanvienArr.size(); ++i) {
		delete nhanvienArr[i];
	}
	nhanvienArr.clear();
}

void CongTy::input()
{
	while (true)
	{
		cout << "1. Nhan vien san xuat " << endl;
		cout << "2. Nhan vien cong nhat" << endl;
		cout << "3. Exit" << endl;
		int c;
		cin >> c;
		if (c == 1) {
			NVSanXuat* temp = new NVSanXuat;
			temp->input();
			nhanvienArr.push_back(temp);
			++nhanviensanxuat;
		}
		else if (c == 2) {
			NVCongNhat* temp = new NVCongNhat;
			temp->input();
			nhanvienArr.push_back(temp);
			++nhanviencongnhat;
		}
		else {
			break;
		}
	}
}

void CongTy::output()
{
	for (int i = 0; i < nhanvienArr.size(); ++i) {
		nhanvienArr[i]->output();
	}
}

int CongTy::countNVSanXuat()
{
	return nhanviensanxuat;
}

int CongTy::countNVCongNhat()
{
	return nhanviencongnhat;
}

int CongTy::countAllSalry()
{
	int sum = 0;
	for (int i = 0; i < nhanvienArr.size(); ++i) {
		sum = sum + nhanvienArr[i]->countsalary();
	}
	return sum;
}

double CongTy::averageSalary()
{
	return countAllSalry() * 1.0 / nhanvienArr.size();
}

NhanVien* CongTy::maxSalaryEmp()
{
	if (nhanvienArr.size() == 0) {
		return nullptr;
	}
	NhanVien* max = nhanvienArr[0];
	for (int i = 0; i < nhanvienArr.size(); ++i) {
		if (nhanvienArr[i]->countsalary() > max->countsalary()) {
			max = nhanvienArr[i];
		}
	}
	return max;
}

void CongTy::sameMonthEmp(int month)
{
	for (int i = 0; i < nhanvienArr.size(); ++i) {
		if (nhanvienArr[i]->getdate().sameMonth(month)) {
			nhanvienArr[i]->output();
		}
	}
}

void CongTy::employeeSalaryLower()
{
	for (int i = 0; i < nhanvienArr.size(); ++i) {
		if (nhanvienArr[i]->countsalary() < 3000000) {
			nhanvienArr[i]->output();
		}
	}
}

NhanVien* CongTy::findbyid(string id)
{
	for (int i = 0; i < nhanvienArr.size(); ++i) {
		if (nhanvienArr[i]->getname() == id) {
			return nhanvienArr[i];
		}
	}
	return nullptr;
}

NhanVien* CongTy::findbyname(string name)
{
	for (int i = 0; i < nhanvienArr.size(); ++i) {
		if (nhanvienArr[i]->getname() == name) {
			return nhanvienArr[i];
		}
	}
	return nullptr;
}

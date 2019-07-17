#pragma once
#include <vector>
#include "NhanVien.h"
#include "NVCongnhat.h"
#include "NVSanXuat.h"
using namespace std;

class CongTy
{
private:
	vector<NhanVien*> nhanvienArr;
	int nhanviensanxuat;
	int nhanviencongnhat;
public:
	CongTy();
	~CongTy();
	//Input Output
	void input();
	void output();
	//Dem so luong nhan vien moi loai
	int countNVSanXuat();
	int countNVCongNhat();
	//Tinh luong va luong trung binh
	int countAllSalry();
	double averageSalary();
	//Liet ke nhan vien
	void employeeSalaryLower(); // nhan vien luong thap hon 3mil
	void sameMonthEmp(int month); // liet ke nhan vien cung thang sinh
	NhanVien* maxSalaryEmp();
	//Tim nhan vien
	NhanVien* findbyid(string id);
	NhanVien* findbyname(string name);
};


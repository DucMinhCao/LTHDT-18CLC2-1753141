#pragma once
#include "GiaoVien.h"
#include "TruongHoc.h"
#include "GVCN.h"
#include <iostream>
#include <vector>
using namespace std;
class TruongHoc
{
private:
	vector<GiaoVien*> giaoVienArr;
	int giaovienchunhiem;
	int giaovienbinhthuong;
public:
	TruongHoc();
	~TruongHoc();
	//Input Output
	void input();
	void output();
	//Dem so luong giao vien moi loai
	int countGVCN();
	int countGV();
	//Tinh luong va luong trung binh
	int countAllSalary();
	double averageSalary();
	//Liet ke giao vien
	void teacherWithSalaryOver(); // >10m
	GiaoVien* maxSalaryTeacher();
	int countTeacherOff(); //4 day per month
	//Tim Giao Vien
	GiaoVien* findbyid(string id);
	GiaoVien* findbyname(string name);
};


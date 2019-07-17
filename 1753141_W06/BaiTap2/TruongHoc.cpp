#include "TruongHoc.h"

TruongHoc::TruongHoc()
{
}

TruongHoc::~TruongHoc() {
	for (int i = 0; i < giaoVienArr.size(); ++i) {
		delete giaoVienArr[i];
	}
	giaoVienArr.clear();
}

void TruongHoc::input()
{
	while (true)
	{
		cout << "1. Giao Vien Binh Thuong " << endl;
		cout << "2. Giao Vien Chu Nhiem" << endl;
		cout << "3. Exit" << endl;
		int c;
		cin >> c;
		if (c == 1) {
			GiaoVien* temp = new GiaoVien;
			temp->input();
			giaoVienArr.push_back(temp);
			++giaovienbinhthuong;
		}
		else if (c == 2) {
			GVCN* temp = new GVCN;
			temp->input();
			giaoVienArr.push_back(temp);
			++giaovienchunhiem;
		}
		else {
			break;
		}
	}
}

void TruongHoc::output() {
	for (int i = 0; i < giaoVienArr.size(); ++i) {
		giaoVienArr[i]->output();
	}
}

int TruongHoc::countGV() {
	return giaovienbinhthuong;
}

int TruongHoc::countGVCN() {
	return giaovienchunhiem;
}

int TruongHoc::countAllSalary() {
	int sum = 0;
	for (int i = 0; i < giaoVienArr.size(); ++i) {
		sum = sum + giaoVienArr[i]->tinhluong();
	}
	return sum;
}

double TruongHoc::averageSalary() {
	return countAllSalary() * 1.0 / giaoVienArr.size();
}

void TruongHoc::teacherWithSalaryOver()
{
	if (giaoVienArr.size() == 0) {
		return;
	}
	for (int i = 0; i < giaoVienArr.size(); ++i) {
		if (giaoVienArr[i]->tinhluong() > 10000000) {
			giaoVienArr[i]->output();
		}
	}
}

GiaoVien* TruongHoc::maxSalaryTeacher() {
	if (giaoVienArr.size() == 0) {
		return nullptr;
	}
	GiaoVien* max = giaoVienArr[0];
	for (int i = 0; i < giaoVienArr.size(); ++i) {
		if (giaoVienArr[i]->tinhluong() > max->tinhluong()) {
			max = giaoVienArr[i];
		}
	}
	return max;
}

int TruongHoc::countTeacherOff()
{
	if (giaoVienArr.size() == 0) {
		return -1;
	}
	for (int i = 0; i < giaoVienArr.size(); ++i) {
		if (giaoVienArr[i]->getSoNgayNghi() > 4) {
			giaoVienArr[i]->output();
		}
	}
}

GiaoVien* TruongHoc::findbyid(string id)
{
	if (giaoVienArr.size() == 0)
		return nullptr;
	for (int i = 0; i < giaoVienArr.size(); ++i) {
		if (giaoVienArr[i]->getId() == id) {
			return giaoVienArr[i];
		}
	}
	return nullptr;
}

GiaoVien* TruongHoc::findbyname(string name)
{
	if (giaoVienArr.size() == 0) 
		return nullptr;
	for (int i = 0; i < giaoVienArr.size(); ++i) {
		if (giaoVienArr[i]->getName() == name) {
			return giaoVienArr[i];
		}
	}
	return nullptr;
}



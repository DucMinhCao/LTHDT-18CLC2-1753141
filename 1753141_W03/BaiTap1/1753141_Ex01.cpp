#include "PhanSo.h"
#include "MangPhanSo.h"
#include <fstream>
using namespace std;

bool load2Int(const char* path, PhanSo*& a, int& n) {
	ifstream fin;
	fin.open(path);
	if (fin.is_open() == false) {
		return false;
	}
	fin >> n;
	a = new PhanSo[n];
	int tuso = 0;
	int mauso = 0;
	for (int i = 0; i < n; i++) {
		fin >> tuso;
		fin >> mauso;
		a[i].setTu(tuso);
		a[i].setMau(mauso);
	}
	return true;
}

int main() {
	PhanSo* a;
	int n;
	bool ans = true;

	ans = load2Int("test.txt", a , n);
	if (ans == false) {
		return 0;
	}
	MangPhanSo b(n, a);
	PhanSo min, max, sum;
	min = b.findmin();
	max = b.findmax();
	sum = b.findsum();
	cout << "Phan so nho nhat la : " << endl;
	min.xuat();
	cout << "Phan so lon nhat la : " << endl;
	max.xuat();
	cout << "Tong cac phan so trong mang la : " << endl;
	sum.xuat();
	cout << "Mang sau khi sap xep la : " << endl;
	b.sort();
	b.display();
	system("pause");
	return 0;
}
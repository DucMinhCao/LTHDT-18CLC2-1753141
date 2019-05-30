#include "MangPhanSo.h"


void MangPhanSo::input() {
	phanSo = new PhanSo[n];
	for (int i = 0; i < n; i++) {
		phanSo[i].input();
	}
}

void MangPhanSo::display() {
	for (int i = 0; i < n; i++) {
		cout << phanSo[i].getTu() << "/" << phanSo[i].getMau() << endl;
	}
}

PhanSo MangPhanSo::findsum() {
	PhanSo sum;
	sum.setTu(0);
	sum.setMau(0);

	for (int i = 0; i < n; i++) {
		sum = sum.add(phanSo[i]);
	}
	return sum;
}

PhanSo MangPhanSo::findmax() {
	PhanSo max = phanSo[0];
	for (int i = 0; i < n; i++) {
		if (phanSo[i].soSanh(max)) {
			max = phanSo[i];
		}
	}
	return max;
}

PhanSo MangPhanSo::findmin() {
	PhanSo min = phanSo[0];
	for (int i = 0; i < n; i++) {
		if (phanSo[i].soSanh(min) == 0) {
			min = phanSo[i];
		}
	}
	return min;
}

void MangPhanSo::sort() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (phanSo[j].soSanh(phanSo[j + 1])) {
				phanSo[j].swap(phanSo[j + 1]);
			}
		}
	}
}

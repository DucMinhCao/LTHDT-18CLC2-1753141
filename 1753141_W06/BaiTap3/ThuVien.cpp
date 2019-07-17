#include "ThuVien.h"

ThuVien::ThuVien()
{
}

ThuVien::~ThuVien()
{
	for (int i = 0; i < docgiaArr.size(); ++i) {
		delete docgiaArr[i];
	}
	docgiaArr.clear();
}

void ThuVien::input()
{
	while (true)
	{
		cout << "1. Doc Gia Thuong" << endl;
		cout << "2. Doc Gia Vip" << endl;
		cout << "3. Exit" << endl;
		int c;
		cin >> c;
		if (c == 1) {
			DocGiaThuong* temp = new DocGiaThuong;
			temp->input();
			docgiaArr.push_back(temp);
			++docgiathuong;
		}
		else if (c == 2) {
			DocGiaVip* temp = new DocGiaVip;
			temp->input();
			docgiaArr.push_back(temp);
			++docgiavip;
		}
		else {
			break;
		}
	}
}

void ThuVien::output()
{
	for (int i = 0; i < docgiaArr.size(); ++i) {
		docgiaArr[i]->output();
	}
}

int ThuVien::countDocGiaThuong()
{
	return docgiathuong;
}

int ThuVien::coungDocGiaVip()
{
	return docgiavip;
}

int ThuVien::countAllFee()
{
	int sum = 0;
	for (int i = 0; i < docgiaArr.size(); ++i) {
		sum = sum + docgiaArr[i]->tinhlephi();
	}
	return sum;
}

double ThuVien::averageFee()
{
	return countAllFee() * 1.0 / docgiaArr.size();
}

void ThuVien::FeeOver()
{
	for (int i = 0; i < docgiaArr.size(); ++i) {
		if (docgiaArr[i]->tinhlephi() > 30000) {
			docgiaArr[i]->output();
		}
	}
}

void ThuVien::Expired()
{
	for (int i = 0; i < docgiaArr.size(); ++i) {
		if (docgiaArr[i]->yearCompare(2017)) {
			docgiaArr[i]->output();
		}
	}
}

DocGia* ThuVien::maxFee()
{
	if (docgiaArr.size() == 0) {
		return nullptr;
	}
	DocGia* max = docgiaArr[0];
	for (int i = 0; i < docgiaArr.size(); ++i) {
		if (docgiaArr[i]->tinhlephi() > max->tinhlephi()) {
			max = docgiaArr[i];
		}
	}
	return max;
}

DocGia* ThuVien::findbyid(string id)
{
	if (docgiaArr.size() == 0) {
		return nullptr;
	}
	for (int i = 0; i < docgiaArr.size(); ++i) {
		if (docgiaArr[i]-> getId() == id) {
			return docgiaArr[i];
		}
	}
	return nullptr;
}

DocGia* ThuVien::findbyname(string name)
{
	if (docgiaArr.size() == 0) {
		return nullptr;
	}
	for (int i = 0; i < docgiaArr.size(); ++i) {
		if (docgiaArr[i]->getName() == name) {
			return docgiaArr[i];
		}
	}
	return nullptr;
}

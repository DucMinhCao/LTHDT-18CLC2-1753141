#pragma once
#include "DocGia.h"
#include "DocGiaThuong.h"
#include "DocGiaVip.h"
#include <vector>
#include <iostream>
using namespace std;

class ThuVien
{
private:
	vector<DocGia*> docgiaArr;
	int docgiathuong;
	int docgiavip;
public:
	ThuVien();
	~ThuVien();
	//input output
	void input();
	void output();
	//dem so luong doc gia moi loai
	int countDocGiaThuong();
	int coungDocGiaVip();
	//Tinh phi va phi trung binh
	int countAllFee();
	double averageFee();
	//Liet ke doc gia
	void FeeOver(); // doc gia co phi tren 30000
	void Expired(); //doc gia het han nam 2017
	DocGia* maxFee();
	//Tim doc gia
	DocGia* findbyid(string id);
	DocGia* findbyname(string name);

};


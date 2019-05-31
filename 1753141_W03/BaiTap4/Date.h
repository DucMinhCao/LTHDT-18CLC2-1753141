#pragma once
#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int day, int month, int year);
	Date(const Date& d);
	~Date();
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	int getDay();
	int getMonth();
	int getYear();
	bool isLeapYear();
	bool checkValid();
	void nhap();
	Date ngayketiep();
	Date ngaydaqua();
	void input();
	void output();
};


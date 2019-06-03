#include "Date.h"

void Date::input() {
	cout << "nhap ngay : " << endl;
	cin >> day;
	cout << "nhap thang : " << endl;
	cin >> month;
	cout << "nhap nam : " << endl;
	cin >> year;
}

Date::Date()
{
	this->day = 1;
	this->month = 1;
	this->year = 2000;
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::Date(const Date& d)
{
	this->day = d.day;
	this->month = d.month;
	this->year = d.year;
}

Date::~Date()
{
}

void Date::setDay(int day) {
	this->day = day;
}
void Date::setMonth(int month) {
	this->month = month;
}
void Date::setYear(int year) {
	this->year = year;
}
int Date::getDay() {
	return this->day;
}
int Date::getMonth() {
	return this->month;
}
int Date::getYear() {
	return this->year;
}
bool Date::isLeapYear() {
	if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 400 == 0)) {
		return true;
	}
	return false;
}

bool Date::checkValid() {
	int* temp = new int[13]{ 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (this->isLeapYear() == true) {
		temp[2] = 29;
	}
	if (year < 1900 || month < 1 || month > 12 || day < 1) {
		return false;
	}

	if (day > temp[month]) {
		return false;
	}
	return true;
}

void Date::nhap() {
	cout << "nhap ngay : " << endl;
	cin >> day;
	cout << "nhap thang : " << endl;
	cin >> month;
	cout << "nhap nam : " << endl;
	cin >> year;
	if (this->checkValid() == false) {
		cout << "ngay thang k ton tai " << endl;
	}
}

Date Date::ngayketiep() {
	int* maxDays = new int[13]{
		-1, 31, 28, 31, 30, 31, 30, 31,
			31, 30, 31, 30, 31
	};

	if (isLeapYear())
	{
		maxDays[2] = 29;
	}

	day++;

	if (day > maxDays[month])
	{
		day = 1;
		month++;

		if (month > 12)
		{
			month = 1;
			year++;
		}
	}
	return *this;
}


Date Date::ngaydaqua() {
	int* maxDays = new int[13]{
		-1, 31, 28, 31, 30, 31, 30, 31,
			31, 30, 31, 30, 31
	};

	if (isLeapYear())
	{
		maxDays[2] = 29;
	}

	if (month == 1 && day == 1) {
		day = maxDays[12];
		month = 12;
		year--;
	} else if (day == 1) {
		day = maxDays[month - 1];
		month--;
	} else {
		day--;
	}
	
	return *this;
}

void Date::output() {
	cout << day << "/" << month << "/" << year << endl;
}



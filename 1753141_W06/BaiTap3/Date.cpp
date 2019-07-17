#include "Date.h"

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

istream& operator>>(istream& in, Date& date)
{
	cout << "nhap ngay : " << endl;
	in >> date.day;
	cout << "nhap thang : " << endl;
	in >> date.month;
	cout << "nhap nam : " << endl;
	in >> date.year;
	return in;
}

ostream& operator<<(ostream& out, const Date& date)
{
	out << date.day << "/" << date.month << "/" << date.year << endl;
	return out;
}


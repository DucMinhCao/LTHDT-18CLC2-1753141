#include "Date.h"

Date::Date()
{
}

bool Date::sameMonth(int month)
{
	return this->month == month;
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

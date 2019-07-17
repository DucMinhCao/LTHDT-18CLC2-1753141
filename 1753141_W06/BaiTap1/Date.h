#pragma once
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
	bool sameMonth(int month);
	friend istream& operator>>(istream& in, Date& date);
	friend ostream& operator<<(ostream& out, const Date& date);
};


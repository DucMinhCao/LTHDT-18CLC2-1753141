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
	int getDay();
	int getMonth();
	int getYear();
	friend istream& operator>>(istream& in, Date& date);
	friend ostream& operator<<(ostream& out, const Date& date);
};


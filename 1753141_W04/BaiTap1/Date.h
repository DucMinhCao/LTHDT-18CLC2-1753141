#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <time.h>
#include <iostream>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	int getDay();
	int getMonth();
	int getYear();
	Date();
	Date(int year);
	Date(int year, int month);
	Date(int year, int month, int day);
	Date(const Date& anotherDate);

	bool isLeapyear();
	Date Tomorrow();
	Date Yesterday();
	int dayfromstart();

	bool operator==(const Date& anotherDate);
	bool operator!=(const Date& anotherDate);
	bool operator>=(const Date& anotherDate);
	bool operator<=(const Date& anotherDate);
	bool operator>(const Date& anotherDate);
	bool operator<(const Date& anotherDate);
	
	friend Date& operator+(const Date& currentDate, int a);
	friend Date& operator-(const Date& currentDate, int a);

	friend std::ostream& operator <<(std::ostream& out,const Date& date);
	friend std::istream& operator >>(std::istream& in, Date& date);
	
	Date operator++(); //prefix
	Date operator++(int a); //postfix
	Date operator--();
	Date operator--(int a);

	explicit operator int() const;
	explicit operator long() const;

	Date& operator +=(const int& a);
	Date& operator -=(const int& a);
};


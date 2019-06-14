#include "Date.h"


void Date::setDay(int day)
{
	this->day = day;
}

void Date::setMonth(int month)
{
	this->month = month;
}

void Date::setYear(int year)
{
	this->year = year;
}

int Date::getDay()
{
	return this->day;
}

int Date::getMonth()
{
	return this->month;
}

int Date::getYear()
{
	return this->year;
}

Date::Date()
{
	time_t theTime = time(NULL);
	struct tm* aTime = localtime(&theTime);

	day = aTime->tm_mday;
	month = aTime->tm_mon + 1;
	year = aTime->tm_year + 1900;
}

Date::Date(int year)
{
	this->day = 1;
	this->month = 1;
	this->year = year;
}

Date::Date(int year, int month)
{
	this->day = 1;
	this->month = month;
	this->year = year;
}

Date::Date(int year, int month, int day)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::Date(const Date& anotherDate) {
	this->day = anotherDate.day;
	this->month = anotherDate.month;
	this->year = anotherDate.year;
}

bool Date::isLeapyear() {
	if ((year % 4 == 0 && year % 100 != 0) && (year % 400 == 0))
		return true;
	return false;
}

Date Date::Tomorrow()
{
	int* maxday = new int[13]{ -1, 31, 28, 31, 30, 31, 30, 31,
			31, 30, 31, 30, 31 };
	if (isLeapyear()) {
		maxday[2] = 29;
	}
	day++;
	if (day > maxday[month]) {
		day = 1;
		month++;
		if (month > 12) {
			month = 1;
			year++;
		}
	}
	return *this;
}

Date Date::Yesterday() {
	int* maxday = new int[13]{ -1, 31, 28, 31, 30, 31, 30, 31,
			31, 30, 31, 30, 31 };
	if (isLeapyear()) {
		maxday[2] = 29;
	}
	if (day == 1 && month == 1) {
		day = maxday[12];
		month = 12;
		year--;
	}
	else if (day == 1) {
		day = maxday[month - 1];
		month--;
	}
	else {
		day--;
	}
	return *this;
}

int Date::dayfromstart() {
	if (month < 3) {
		year--;
		month += 12;
	}
	int first = 365 * year + year / 4 - year / 100 + year / 400 + (153 * month - 457) / 5 + day - 306;
	return first;
}

bool Date::operator==(const Date& anotherDate)
{
	return ((day == anotherDate.day) && (month == anotherDate.month) && (year == anotherDate.year));
}

bool Date::operator!=(const Date& anotherDate)
{
	return ((day != anotherDate.day) || (month != anotherDate.month) || (year != anotherDate.year));
}

bool Date::operator>=(const Date& anotherDate)
{
	Date temp = *this;
	Date temp1 = anotherDate;
	return (temp.dayfromstart() - temp1.dayfromstart()) >= 0;
}

bool Date::operator<=(const Date& anotherDate)
{
	Date temp = *this;
	Date temp1 = anotherDate;
	return (temp.dayfromstart() - temp1.dayfromstart()) <= 0;
}

bool Date::operator>(const Date& anotherDate)
{
	Date temp = *this;
	Date temp1 = anotherDate;
	return (temp.dayfromstart() - temp1.dayfromstart()) > 0;
}

bool Date::operator<(const Date& anotherDate)
{
	Date temp = *this;
	Date temp1 = anotherDate;
	return (temp.dayfromstart() - temp1.dayfromstart()) < 0;
}

Date& operator+(const Date& currentDate, int a)
{
	Date result(currentDate);
	for (int i = 0; i < a; i++) {
		result = result.Tomorrow();
	}
	return result;
} 

Date& operator-(const Date& currentDate, int a) {
	Date result(currentDate);
	for (int i = 0; i < a; i++) {
		result = result.Yesterday();
	}
	return result;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
	out << date.day << "/" << date.month << "/" << date.year << endl;
	return out;
}

std::istream& operator>>(std::istream& in, Date& date) {
	cout << "Input Date Following Order dd/mm/yyyy" << endl;
	in >> date.day >> date.month >> date.year;
	return in;
}


Date Date::operator++()
{
	*this = this->Tomorrow();
	return *this;
}

Date Date::operator++(int a)
{
	Date result = *this;
	*this = this->Tomorrow();
	return result;
}

Date Date::operator--()
{
	*this = this->Yesterday();
	return *this;
}

Date Date::operator--(int a)
{
	Date result = *this;
	*this = this->Yesterday();
	return result;
}

Date::operator int() const{
	Date flag(2019);
	Date temp = *this;
	int first = temp.dayfromstart();
	int second = flag.dayfromstart();
	return first - second;
}

Date::operator long() const{
	Date flag(1, 1, 1);
	Date temp = *this;
	long first = temp.dayfromstart();
	long second = flag.dayfromstart();
	return (long) first - second;
}

Date& Date::operator+=(const int& a) {
	for (int i = 0; i < a; i++) {
		this->Tomorrow();
	}
	return *this;
}

Date& Date::operator-=(const int& a) {
	for (int i = 0; i < a; i++) {
		this->Yesterday();
	}
	return *this;
} 

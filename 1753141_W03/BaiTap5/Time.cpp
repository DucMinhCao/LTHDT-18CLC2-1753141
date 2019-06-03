#include "Time.h"

Time::Time()
{
	this->minute = 0;
	this->second = 0;
	this->hour = 0;
}

Time::Time(int second, int minute, int hour)
{
	this->second = second;
	this->minute = minute;
	this->hour = hour;
}

Time::Time(const Time& t)
{
	this->second = t.second;
	this->minute = t.minute;
	this->hour = t.hour;
}

Time::~Time()
{
}

void Time::input() {
	do {
		cout << "Input second : " << endl;
		cin >> second;
		cout << "Input minute : " << endl;
		cin >> minute;
		cout << "Input hour : " << endl;
		cin >> hour;
	} while (second > 59 || minute > 59 || hour > 24);
}

void Time::output() {
	cout << hour << "h:" << minute << "m:" << second << "s" << endl;
}

void Time::increase() {
	if (second < 59) {
		second++;
	}
	else if (minute < 59){
		minute++;
		second = 0;
	}
	else {
		hour++;
		minute = 0;
		second = 0;
	}
	if (hour > 23) {
		hour = 0;
	}
}

void Time::decrease() {
	if (second == 0 && minute == 0 && hour == 0) {
		second = 59;
		minute = 59;
		hour = 23;
	} else if (second == 0 && minute == 0) {
		second = 59;
		minute = 59;
		hour--;
	} else if (second == 0) {
		second = 59;
		minute--;
	} else {
		second--;
	}
}
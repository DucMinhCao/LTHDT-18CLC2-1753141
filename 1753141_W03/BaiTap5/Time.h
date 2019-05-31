#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class Time
{
private:
	int minute;
	int hour;
	int second;
public:
	Time();
	Time(int second, int minute, int hour);
	Time(const Time& t);
	~Time();
	void input();
	void output();
	void increase();
	void decrease();
};


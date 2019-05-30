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
	void input();
	void output();
	void increase();
	void decrease();
};


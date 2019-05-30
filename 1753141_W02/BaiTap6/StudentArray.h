#pragma once
#include "Student.h"
class StudentArray
{
private:
	int n;
	Student* a;
public:
	StudentArray(Student *&a, int& n);
	void sort();
	void output();
};


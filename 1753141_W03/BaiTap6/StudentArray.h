#pragma once
#include "Student.h"
class StudentArray
{
private:
	int n;
	Student* a;
public:
	StudentArray();
	StudentArray(Student *&a, int& n);
	StudentArray(const StudentArray& a);
	~StudentArray();
	void sort();
	void output();
	bool LoadStudentArray(const char* path);
	bool SaveStudentArray(const char* path);
};


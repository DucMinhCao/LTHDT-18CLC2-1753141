#include "StudentArray.h"

StudentArray::StudentArray()
{
	this->n = 0;
	this->a = NULL;	
}

StudentArray::StudentArray(Student*& a, int& n) {
	this->n = n;
	this->a = a;
}

StudentArray::StudentArray(const StudentArray& a)
{
	this->n = a.n;
	this->a = new Student[n];
	for (int i = 0; i < n; i++) {
		this->a[i] = a.a[i];
	}
}

StudentArray::~StudentArray()
{
}

void StudentArray::sort() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j].getLastName() > a[j + 1].getLastName()) {
				a[j].swap(a[j + 1]);
			}
		}
	}
}

void StudentArray::output() {
	for (int i = 0; i < n; i++) {
		a[i].display();
	}
}

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
		a[i].Output();
	}
}


bool StudentArray::LoadStudentArray(const char* path) {
	ifstream fin;
	fin.open(path);
	if (fin.is_open() == false) {
		fin.close();
		return false;
	}
	fin >> this->n;
	this->a = new Student[n];
	for (int i = 0; i < n; i++) {
		string id;
		string lastname;
		string firstname;
		string address;
		string dob;
		double mark;
		fin >> id;
		fin >> lastname;
		fin >> firstname;
		fin >> address;
		fin >> dob;
		fin >> mark;
		this->a[i].setID(id);
		this->a[i].setLastName(lastname);
		this->a[i].setfirstName(firstname);
		this->a[i].setAddress(address);
		this->a[i].setDob(dob);
		this->a[i].setMark(mark);
	}
	fin.close();
	return true;
}

bool StudentArray::SaveStudentArray(const char* path) {
	ofstream fout;
	fout.open(path);
	if (fout.is_open() == false) {
		fout.close();
		return false;
	}
	for (int i = 0; i < this->n; i++) {
		fout << "Student number[" << i << "] " << endl;
		fout << "ID : " << this->a[i].getID() << endl;
		fout << "Firstname : " << this->a[i].getFirstName() << endl;
		fout << "Lastname : " << this->a[i].getLastName() << endl;
		fout << "Address : " << this->a[i].getAddress() << endl;
		fout << "DOB : " << this->a[i].getDob() << endl;
		fout << "Mark : " << this->a[i].getMark() << endl;
		fout << endl;
	}
	fout.close();
	return true;
}
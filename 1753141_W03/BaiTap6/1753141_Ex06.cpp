#include "Student.h"
#include "StudentArray.h"
#include <fstream>

bool loadStudent(const char* path, Student*& a, int& n) {
	ifstream fin;
	fin.open(path);
	if (fin.is_open() == false) {
		return false;
	}
	fin >> n;
	a = new Student[n];
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
		a[i].setID(id);
		a[i].setLastName(lastname);
		a[i].setfirstName(firstname);
		a[i].setAddress(address);
		a[i].setDob(dob);
		a[i].setMark(mark);
	}
}

bool saveStudent(const char* path, Student*& a, int &n) {
	ofstream fout;
	fout.open(path);
	if (fout.is_open() == false) {
		return false;
	}
	for (int i = 0; i < n; i++) {
		fout << "Student number[" << i << "] " << endl;
		fout <<"ID : " << a[i].getID() << endl;
		fout << "Firstname : " << a[i].getFirstName() << endl;
		fout << "Lastname : " << a[i].getLastName() << endl;
		fout << "Address : " << a[i].getAddress() << endl;
		fout << "DOB : " << a[i].getDob() << endl;
		fout << "Mark : " << a[i].getMark() << endl;
		fout << endl;
	}
	return true;
}

int main() {
	Student* a;
	int n;
	bool ans = true;
	bool save = true;

	ans = loadStudent("test.txt", a, n);
	StudentArray b(a, n);
	b.sort();
	save = saveStudent("output.xml", a, n);
	system("pause");
	return 0;
}
#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Student
{
private:
	string id;
	string lastname;
	string firstname;
	string address;
	string dob;
	double mark;
public:
	void setID(string id);
	void setLastName(string lastname);
	void setfirstName(string firstname);
	void setAddress(string address);
	void setDob(string dob);
	void setMark(double mark);
	string getID();
	string getLastName();
	string getFirstName();
	string getAddress();
	string getDob();
	double getMark();
	void swap(Student &x);
	void display();
};


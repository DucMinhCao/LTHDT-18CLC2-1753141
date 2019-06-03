#include "Student.h"

Student::Student()
{
	id = "0";
	lastname = "";
	firstname = "";
	address = "";
	dob = "";
	mark = 0;
}

Student::Student(string id, string lastname, string firstname, string address, string dob, double mark)
{
	this->id = id;
	this->lastname = lastname;
	this->firstname = firstname;
	this->address = address;
	this->dob = dob;
	this->mark = mark;
}

Student::Student(const Student& s)
{
	this->id = s.id;
	this->lastname = s.lastname;
	this->firstname = s.firstname;
	this->address = s.address;
	this->dob = s.dob;
	this->mark = s.mark;
}

Student::~Student()
{
}

void Student::setID(string id) {
	this->id = id;
}

void Student::setLastName(string lastname) {
	this->lastname = lastname;
}
void Student::setfirstName(string firstname) {
	this->firstname = firstname;
}
void Student::setAddress(string address) {
	this->address = address;
}

void Student::setDob(string dob) {
	this->dob = dob;
}
void Student::setMark(double mark) {
	this->mark = mark;
}
string Student::getID() {
	return id;
}
string Student::getLastName() {
	return lastname;
}
string Student::getFirstName() {
	return firstname;
}
string Student::getAddress() {
	return address;
}
string Student::getDob() {
	return dob;
}
double Student::getMark() {
	return mark;
}

void Student::swap(Student &x) {
	Student tmp;
	tmp = *this;
	*this = x;
	x = tmp;
}

void Student::Output() {
	cout << "ID : " << id << endl;
	cout << "Fullname : " << lastname << " " << firstname << endl;
	cout << "DOB : " << dob << endl;
	cout << "Address : " << address << endl;
	cout << "Mark : " << mark << endl;
	cout << endl;
}

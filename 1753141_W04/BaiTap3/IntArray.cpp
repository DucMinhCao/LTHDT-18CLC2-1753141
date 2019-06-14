#include "IntArray.h"

IntArray::IntArray()
{
	this->n = 0;
	this->a = nullptr;
}

IntArray::IntArray(const int& n)
{
	this->n = n;
	this->a = new int[n];
}

IntArray::IntArray(int*& a, const int& n)
{
	this->n = n;
	this->a = new int[this->n];
	for (int i = 0; i < this->n; i++) {
		this->a[i] = a[i];
	}
}

IntArray::IntArray(const IntArray*& a)
{
	this->n = a->n;
	this->a = new int[this->n];
	for (int i = 0; i < this->n; i++) {
		this->a[i] = a->a[i];
	}
}

IntArray& IntArray::operator=(IntArray*& src)
{
	std::swap(this->n, src->n);
	std::swap(this->a, src->a);
	return *this;
}

std::istream& operator>>(std::istream& in, const IntArray& a)
{
	for (int i = 0; i < a.n; i++) {
		in >> a.a[i];
	}
	return in;
}

std::ostream& operator<<(std::ostream& out, const IntArray& a)
{
	out.clear();
	for (int i = 0; i < a.n; i++) {
		out << a.a[i] << std::endl;
	}
	return out;
}

int& IntArray::operator[](int n)
{
	if (n > this->n) {
		cout << "Array index out of bounded" << endl;
		exit(0);
	}
	return a[n];
}
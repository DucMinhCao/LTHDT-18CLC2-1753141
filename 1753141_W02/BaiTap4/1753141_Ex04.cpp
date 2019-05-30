#include "Date.h"
using namespace std;

int main() {
	Date a, nextday, prevday, tempday;
	a.input();
	tempday = a;
	nextday = a.ngayketiep();
	prevday = tempday.ngaydaqua();
	cout << "Next day is : ";
	nextday.output();
	cout << "Prev day is : ";
	prevday.output();
	system("pause");
	return 0;
}
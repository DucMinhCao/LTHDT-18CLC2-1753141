#include "Fraction.h"
#include "FractionArray.h"
#include <fstream>
using namespace std;

int main() {
	FractionArray b;
	b.LoadFractionArray("test.txt");
	Fraction min, max, sum;
	min = b.FindMin();
	max = b.FindMax();
	sum = b.FindSum();
	cout << "Min Fraction : " << endl;
	min.Output();
	cout << "Max Fraction : " << endl;
	max.Output();
	cout << "Sum Of FractionArray : " << endl;
	sum.Output();
	cout << "Fraction Array After Sort : " << endl;
	b.Sort();
	b.Output();
	system("pause");
	return 0;
}
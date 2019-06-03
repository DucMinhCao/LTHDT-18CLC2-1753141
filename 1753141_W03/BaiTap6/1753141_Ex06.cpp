#include "Student.h"
#include "StudentArray.h"
#include <fstream>

int main() {
	StudentArray b;
	b.LoadStudentArray("test.txt");
	b.sort();
	b.SaveStudentArray("output.xml");
	system("pause");
	return 0;
}
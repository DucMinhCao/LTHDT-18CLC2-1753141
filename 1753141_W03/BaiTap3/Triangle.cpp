#include "Triangle.h"

int Triangle::checkTriangle() {
	double a = this->a.distance(b);
	double b = this->b.distance(c);
	double c = this->b.distance(this->c);

	if (a < b + c && b < a + c && c < a + b) {
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
			return 1; //tam giac vuong
		else if (a == b == c)
			return 2; // tam giac deu
		else if (a == b || a == c || b == c)
			return 3; // tam giac can
		else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
			return 4;//Day la tam giac tu
		else
			return 5;//Day la tam giac nhon
	}
	else
		return -1;
}

Triangle::Triangle()
{
	;
}

Triangle::Triangle(Point a, Point b, Point c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

Triangle::Triangle(const Triangle& t)
{
	this->a = t.a;
	this->b = t.b;
	this->c = t.c;
}

Triangle::~Triangle()
{
}

void Triangle::setcanh(int a, int b, int c, int d, int e, int f) {
	this->a.setX(a);
	this->a.setY(b);
	this->b.setX(c);
	this->b.setY(d);
	this->c.setX(e);
	this->c.setY(f);
}

#ifndef __CIRCLE_CPP__
#define __CIRCLE_CPP__

#include "Circle.h"
#include "Shape.h"
#include <iostream>

using namespace std;

Circle::Circle(string shapeName, double radius) : Shape(shapeName), radius{radius} {}

Circle::~Circle() {}

double Circle::getArea() {
	const long double PI = 3.141592653589793238L;
	return PI * radius * radius;

}

void Circle::print() {
    Shape::print();
    cout  << "Radius: " << this -> radius << endl;
}
#endif

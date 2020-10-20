#ifndef __TRAINGLE_CPP__
#define __TRAINGLE_CPP__

#include "Triangle.h"
#include "Shape.h"

using namespace std;

Triangle::Triangle(string name, double base, double height) : Shape(name), base{base}, height{height} {}

Triangle::~Triangle(){}

double Triangle::getArea(){
	return (height * base)/2;

}

void Triangle::print(){
	Shape::print()
	cout << "base: " << base << endl;
	cout << "height: " << height << endl;
}

#endif

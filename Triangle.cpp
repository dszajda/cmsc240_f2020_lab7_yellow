#ifndef __TRIANGLE_CPP__
#define __TRIANGLE_CPP__

#include "Triangle.h"
#include "Shape.h"
#include <iostream>

Triangle::Triangle(string name, double base, double height) : Shape(name), base{base}, height{height} {}

Triangle::~Triangle(){}

double Triangle::getArea(){
	return (height * base)/2;
}

void Triangle::print(){
	Shape::print();
	cout << "base: " << base << endl;
	cout << "height: " << height << endl;
}

#endif

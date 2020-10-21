#ifndef __Shape_CPP__
#define __Shape_CPP__

#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape(std::string shapeName) {
	this->name = shapeName;
}
Shape::~Shape() {}

double Shape::getArea(){
	return 0.0;
}

void Shape::print(){
	cout << "name: " << name << endl;
}

#endif

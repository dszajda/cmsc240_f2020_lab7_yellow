#ifndef __RECTANGLE_CPP__
#define __RECTANGLE_CPP__

#include "Rectangle.h"
#include "Shape.h"
#include <iostream>
#include <string>

Rectangle::Rectangle(string shapeName, double width, double height) : Shape(shapeName), width{width}, height{height} {}

Rectangle::~Rectangle() {}

double Rectangle::getArea(){
	return (width * height);
}

void Rectangle::print(){
	Shape::print();
	cout << "Width: " << this -> width << endl;
	cout << "Height: " << this -> height << endl;
}

#endif

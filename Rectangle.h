#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Shape.h"
#include <string>

using namespace std;

class Rectangle : public Shape {

	private:
		double width;
		double height;

	public:
		Rectangle(string shapeName, double width, double height);
		~Rectangle();

		double getArea();

		void print();
		// virtual void print();
		// virtual void print() = 0;



};
#endif

#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "Shape.h"
#include <string>

using namespace std;

class Circle : public Shape {

	private:
		double radius;

	public:
		Circle(string shapeName, double radius);
		~Circle();

		double getArea();

		void print();
		// virtual void print();
		// virtual void print() = 0;



};
#endif

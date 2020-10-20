#include "Shape.h"
#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include <string>

using namespace std;

class Triangle : public Shape
{
	private:
		double base;
		double height;

	public:
		Triangle(string triangleName, double base, double height);
		~Triangle();
		
		double getArea();
	
		void print();
};
#endif

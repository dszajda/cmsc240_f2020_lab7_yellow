#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "Shape.h"
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
		//virtual void print();
		//virtual void print() = 0;
};
#endif

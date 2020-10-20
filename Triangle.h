#include "Shape.h"
#ifndef __TRIANGLE_H__
#define __TRAINGLE_H__

#include <string>

class Triangle : public Shape
{
	private:
		std::string name;
		double base;
		double height;

	public:
		Triangle(std::string triangleName, double base, double height);
		~Triangle();
		
		double getArea();
	
		void print();
};
#endif

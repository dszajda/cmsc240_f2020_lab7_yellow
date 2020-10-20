#ifndef __Shape_CPP__
#define __Shape_CPP__

Shape::Shape(std::string shapeName) :name(shapeName)  {}
Shape::~Shape() {}

virtual double getArea(){
	return 0.0; 
}

virtual void print(){
	cout << "name: " << name << endl;
}

#endif

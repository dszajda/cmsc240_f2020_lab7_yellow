#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

#include <iostream>

using namespace std;

int main() {

    cout << "Testing Shape" << endl;
	Shape shape("myShape");
	cout << "Shape area: " <<  shape.getArea() << " [0]" << endl;
    cout << "Testing Shape print()" << endl;
	shape.print();
    
    cout << "Testing Circle" << endl;
    Circle circle1("Circle", 5);
    cout << "Circle area: " << circle1.getArea() << endl;
    cout << "Testing Circle print()" << endl;
    circle1.print();

    cout << "Testing Triangle" << endl;
    Triangle triangle1("Triangle", 21.0, 3.5);
    cout << "Triangle area: " << triangle1.getArea() << endl;
    cout << "Testing Triangle print()" << endl;
    triangle1.print();
    
    cout << "Testing Rectangle" << endl;
    Rectangle rectangle1("Rectangle", 3, 3);
    cout << "Rectangle area: " << rectangle1.getArea() << " [9]" << endl;
    cout << "Testing Rectangle print()" << endl;
    rectangle1.print();

	return 0;

}

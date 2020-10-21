#include "Shape.h"

#include <iostream>

using namespace std;

int main() {

    cout << "Testing Shape" << endl;
	Shape shape("myShape");
	cout << "Shape area: " <<  shape.getArea() << " [0]" << endl;
    cout << "Testing Shape print()" << endl;
	shape.print();
    
    cout << "Testing Cirlce" << endl;
    Circle circle1("Circle", 5);
    cout << "Circle area: " << circle1.getArea() << << endl;
    cout << "Testing Circle print()" << endl;
    circle1.print();

	return 0;

}

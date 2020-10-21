#include "Shape.h"

#include <iostream>

using namespace std;

int main() {

	Shape shape("myShape");
	cout << shape.getArea() << endl;
	shape.print();

	return 0;

}

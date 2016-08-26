#include <iostream>
using namespace std;

class Rectangle {
	double width, height, depth;
	public:
	Rectangle(double a, double b, double c) {width = a, height=b, depth=c;}
	double area() {return width*height;}
	double cubed () {return width*height*depth;}
};


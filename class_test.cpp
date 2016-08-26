// classes example
#include <iostream>
#include "class_test.h"
using namespace std;

//class Rectangle {
//    int width, height, depth;
//    public:
//    Rectangle(int a, int b, int c) {width = a; height = b; depth = c;}
//    int area() {return width*height;}
//    int cubed() {return width*height*depth;}
//};

//void Rectangle::set_values (int x, int y, int z) {
//  width = x;
//  height = y;
//  depth = z;
//};

int main () {
  Rectangle rect (4.60,4.66,4.75);
//  rect.set_values (4,4,4);
  cout << "area: " << rect.area() << "\n" << "cubed: " << rect.cubed() << "\n";
  return 0;
}

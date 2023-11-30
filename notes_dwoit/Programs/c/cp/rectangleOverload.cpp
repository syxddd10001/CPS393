
/*Source: rectangleOverload.cpp
  illustrates overloading + for Rectangles
  compile: g++ rectangleOverload.cpp
*/
#include <iostream>  
using namespace std;

class Rectangle {
  private:                         
    double width, length;
  public:
    void setWidth(double);
    void setLength(double);
    double getWidth(void)  const;  
    double getLength(void) const;  
    double getArea(void)   const;  
    Rectangle operator+(const Rectangle &b) ;
};

void Rectangle::setWidth(double w) {
  width = w;
}
void Rectangle::setLength(double l) {
  length = l;
}
double Rectangle::getWidth() const {
  return width;
}
double Rectangle::getLength() const {
  return length;
}

double Rectangle::getArea() const {  
  return width*length;               
}                                    
//first operand is implicitly this 
Rectangle Rectangle::operator+(const Rectangle &b) {
      Rectangle rect;
      rect.length = this->length + b.length;
      rect.width  = this->width  + b.width ;
      return rect;
}

int main () {
  Rectangle box1, box2, box3; 
  box1.setWidth(5); box1.setLength(7);
  box2.setWidth(2); box2.setLength(6);
  box3=box1+box2;

  cout << "Here is box1's data:" << endl ;
  cout << "Width,Length: "  << box1.getWidth() <<"," << box1.getLength() <<endl;

  cout << "Here is box2's data:" << endl ;
  cout << "Width,Length: "  << box2.getWidth() <<"," << box2.getLength() <<endl;

  cout << "Here is box1+box2's data:" << endl ;
  cout << "Width,Length: "  << box3.getWidth() <<"," << box3.getLength() <<endl;

  return 0;
}
  

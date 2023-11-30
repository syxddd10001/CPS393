
/*Source: rectangleNEW.cpp
  same as rectangle.cpp except uses new keyword (see main)
  compile: g++ rectangleNEW.cpp
*/
#include <iostream>  
using namespace std;

class Rectangle {
  private:                         //unnecessary, since private is default
    double width, length;
  public:
    void setWidth(double);
    void setLength(double);
    double getWidth(void)  const;  //the const(ant) keyword bans function
    double getLength(void) const;  //from altering any member variables
    double getArea(void)   const;  //in the object (width, length)
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

double Rectangle::getArea() const {  //don't make area a member variable
  return width*length;               //because it can get stale (e.g., if
}                                    //length changes, area goes stale

int main () {
  //Rectangle box;    //Define an instance of the Rectangle class
  Rectangle *boxPtr;  //Define a pointer to an instance of the Rectangle class
                      //useful later, when use a constructor
  double rectWidth;   //Local variable for width
  double rectLength;  //Local variable for length

  //get rectangle's width and length from user
  cout << "This program will calculate the area of a ";
  cout << "rectangle.\nWhat is the width? ";
  cin >> rectWidth;
  cout << "What is the length? ";
  cin >> rectLength;

  boxPtr = new Rectangle;   //allocate storage for instance of Rectangle class
  //store width and length in the box object
  boxPtr->setWidth(rectWidth);
  boxPtr->setLength(rectLength);

  //display rectangle's data
  cout << "Here is the rectangle's data:" << endl ;
  cout << "Width: "  << boxPtr->getWidth()  <<endl;
  cout << "Width: "  << boxPtr->getLength()  <<endl;
  cout << "Area: "   <<  boxPtr->getArea()  <<endl;

  delete boxPtr;   //destroy object created by new 
  boxPtr = NULL;   //Not necessary here, since program ending
  return 0;
}
  

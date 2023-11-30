
/*Source: rectangle.cpp
  compile: g++ -c rectangle.cpp
*/
#include <iostream>  
#include "rectangle.h"  

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


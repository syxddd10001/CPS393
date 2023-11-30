
/*Source: rectangle.cpp
  illustrates simple class
  compile: g++ rectangle.cpp
*/
#include <iostream>  
#include "rectangle.h"
using namespace std;


int main () {
  Rectangle box;      //Define an instance of the Rectangle class
  double rectWidth;   //Local variable for width
  double rectLength;  //Local variable for length

  //get rectangle's width and length from user
  cout << "This program will calculate the area of a ";
  cout << "rectangle.\nWhat is the width? ";
  cin >> rectWidth;
  cout << "What is the length? ";
  cin >> rectLength;

  //store width and length in the box object
  box.setWidth(rectWidth);
  box.setLength(rectLength);

  //display rectangle's data
  cout << "Here is the rectangle's data:" << endl ;
  cout << "Width: "  << box.getWidth()  <<endl;
  cout << "Length: " << box.getLength() <<endl;
  cout << "Area: "   <<  box.getArea()  <<endl;

  return 0;
}
  

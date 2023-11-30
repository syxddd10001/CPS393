
/*Source: rectangleInClass.cpp
  Illustrates defining the methods inside class. 
  Note no need for Rectangle:: before method definitions.
  This approach is not possible if want to be able to use
  separate compilation, as shown in directory rectSepSpecFromImp.
  compile: g++ rectangleInClass.cpp
*/
#include <iostream>  
using namespace std;

class Rectangle {
  private:                         
    double width, length;
  public:                            
    void setWidth(double w) {
      width = w;
    }
    void setLength(double l) {
      length = l;
    }
    double getWidth(void)  const {
      return width;
    }
    double getLength(void) const {
      return length;
    }

    double getArea(void)   const {  
      return width*length;  
    }                                   
};

int main () {
  Rectangle box;      
  double rectWidth;   
  double rectLength;  

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
  

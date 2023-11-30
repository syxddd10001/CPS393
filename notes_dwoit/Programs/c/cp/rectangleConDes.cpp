
/*Source: rectangleConDes.cpp
  illustrates constructors and destructors (with parameter overloading)
  compile: g++ rectangleConsDes.cpp

  Constructors: Have same name as class name. Have no return type. 
                May overload parameters. System creates default if none
		provided.
  Destructors: -Have same name as class name, preceded by tilde (~)
               -Take no arguments. Have no return type.
               -System creates default if none provided. 
               -Called AUTOMATICALLY when object goes out of scope:
                  -Function ends, or program ends, or block containing local 
                   variables ends, or object is deleted.
               -Not explicitly called by the programmer (since automatic).
               -NEEDED when class has dynamically allocated memory (new or malloc) 
                or pointers in it. (to avoid memory leaks--memory still
                allocated when it is no longer being used). 
                Usually: if constructor uses new, then destructor uses delete
*/
#include <iostream>  
using namespace std;

class Rectangle {
  private:                         
    double width, length;
  public:
                                  //constructor definitions
    Rectangle() ;                 //unnecessary, as system provides default anyway
    Rectangle(double,double) ;    //constructor definition
    ~Rectangle() ;                //destructor
    void setWidth(double);
    void setLength(double);
    double getWidth(void)  const;  
    double getLength(void) const;  
    double getArea(void)   const;  
};

//constructor implementation for 0 arguments and 2 arguments
Rectangle::Rectangle() { width=1; length=1;} 
                                             
Rectangle::Rectangle(double w, double l) {   
  width=w; length=l;                         
}
/* Need to use THIS if variable names are same as class variables
Rectangle::Rectangle(double width, double length) {   
  this->width=width; this->length=length;
}
*/
Rectangle::~Rectangle() {
  //nothing to do here!
}
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

int main () {
  Rectangle box;       //uses appropriate constructor
  Rectangle box1(3,7); //uses appropriate constructor

  //display rectangle data
  cout << "Here is box's data:" << endl ;
  cout << "Width: "  << box.getWidth()  <<endl;
  cout << "Length: " << box.getLength() <<endl;
  cout << "Area: "   <<  box.getArea()  <<endl;

  cout << "Here is box1's data:" << endl ;
  cout << "Width: "  << box1.getWidth()  <<endl;
  cout << "Length: " << box1.getLength() <<endl;
  cout << "Area: "   <<  box1.getArea()  <<endl;

  return 0;
}
  

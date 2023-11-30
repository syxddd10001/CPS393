
/*Source: rectangleStatic.cpp
  modifies rectangleConDes.cpp to illustrate
  static data member: a variable that has only a single copy for the
    whole class. All objects of class share it. Visible only inside
    class.
  static member function: function that can access only static data
    members of class. Invoke it by class name (not with an object).
  compile: g++ rectangleStatic.cpp
*/
#include <iostream>  
using namespace std;

class Rectangle {
  private:                         
    double width, length;
    static int count;    //ONE count shared by whole class
  public:
    static int box_count() { 
       return count;
    }
    Rectangle() ;                 //constructor
    Rectangle(double,double) ;    //constructor definition
    ~Rectangle() ;                //destructor
    void setWidth(double);
    void setLength(double);
    double getWidth(void)  const;  
    double getLength(void) const;  
    double getArea(void)   const;  
};

//constructor implementation for 0 arguments and 2 arguments
Rectangle::Rectangle() { width=1; length=1; count++;} 
                                             
Rectangle::Rectangle(double w, double l) {   
  width=w; length=l; count++;
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
int Rectangle:: count=0;  //static data member invoked via class name

int main () {
  Rectangle box;       //uses appropriate constructor
  Rectangle box1(3,7); //uses appropriate constructor
  double rectWidth;   //Local variable for width
  double rectLength;  //Local variable for length

  //display number of Rectangle objects 
  cout << "There are "<<Rectangle::box_count()<< " Rectangles"<<endl;
  //display rectangle data
  cout << "Here is box's data:" << endl ;
  cout << "  Width: "  << box.getWidth()  <<endl;
  cout << "  Length: " << box.getLength() <<endl;
  cout << "  Area: "   <<  box.getArea()  <<endl;

  cout << "Here is box1's data:" << endl ;
  cout << "  Width: "  << box1.getWidth()  <<endl;
  cout << "  Length: " << box1.getLength() <<endl;
  cout << "  Area: "   <<  box1.getArea()  <<endl;

  return 0;
}
  

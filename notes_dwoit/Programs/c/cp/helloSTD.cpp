#include <iostream>
//compile: g++ helloSTD.cpp

using namespace std;  /*so don't need std:: in front of cout and endl
                        for drawbacks, see bottom comment*/
int main() {
  cout << "Hello World!" << endl;   
  return 0;
}

/*using namespace X; is often done, but has disacvantages:
Not very efficient, since WHOLE namespace is included, not just those
you intend to use in your class.
If used 2 different namespaces, which both had a function foo, then 
calling foo is now ambiguous.
If your class includes a namespace, and then someone else uses
your class, you're now forcing them to also import everything in those
other namespaces, too.
*/

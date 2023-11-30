#include <iostream>
#include <cstdio>  
using namespace std;
 
class displayItem {
   public:
      void display(int i) {
	printf("Displaying the int %d\n",i);
      }
      void display(float f) {
	printf("Displaying the float %.2f\n",f);
      }
      void display(double d) {
	printf("Displaying the double %lf\n",d);
      }
      void display(const char *c) { //const to avoid compiler complaint
	printf("Displaying the string %s\n",c);
      }
};

int main(void) {
   displayItem pd;
 
   // pass an integer
   pd.display(7);
   
   // Call display to display double
   double d=747.272;
   pd.display(d);
   
   // Call display to display float 
   float f=747.272;
   pd.display(f);
   
   // let compiler figure it out
   pd.display(747.272);

   // Call display to display string
   pd.display("Hello World!");
 
   // Call display to display character
   pd.display('A');

   return 0;
}

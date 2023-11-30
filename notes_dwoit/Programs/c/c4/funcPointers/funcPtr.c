//source: funcPtr.c
#include <stdio.h>
#include <stdlib.h>

//a basic function f
void f (int a, int b) {
  printf("function f says a=%d and b=%d\n",a,b);
}

int main (void) {
  //fPtr is a POINTER to a function. That function to which 
  //it points has 2 int parameters  and returns void
  void (*fPtr)(int,int);
  //function f has right type (2 int params and returns void)
  fPtr=&f;

  //Call f using fPtr
  (*fPtr)(5,8);
  exit(0);
}

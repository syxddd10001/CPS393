
//source: funcPtrArg1.c
#include <stdio.h>
#include <stdlib.h>

//basic function prints sum of its arguments 
void sum (int a, int b) {
  printf("%d",a+b);
}
//basic function prints product of its arguments 
void prod (int a, int b) {
  printf("%d",a*b);
}

//a function that takes a basic function as a parameter
//and calls that basic function

void apply(int x, int y, void (*f)(int,int)) {
  (*f)(x,y);
}

int main (void) {

  apply(2,4,sum);
  printf("\n");
  apply(2,4,prod);
  printf("\n");
  exit(0);
}

//source: funcPtrArray.c
#include <stdio.h>
#include <stdlib.h>
int add(int a, int b) {
  return (a+b);
}
int sub(int a, int b) {
  return (a-b);
}
int mul(int a, int b) {
  return (a*b);
}

int main (void) {
  //fpA is array of function pointers
  int (*fpA[])(int,int) = {add,sub,mul};
  printf("2+5=%d\n", (*fpA[0])(2,5));
  printf("2-5=%d\n", (*fpA[1])(2,5));
  printf("2*5=%d\n", (*fpA[2])(2,5));
//or this, if you don't like to see the explicit pointer
//  printf("2+5=%d\n", fpA[0](2,5));
//  printf("2-5=%d\n", fpA[1](2,5));
//  printf("2*5=%d\n", fpA[2](2,5));
//  exit(0);
}

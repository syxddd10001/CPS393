#include <stdio.h>
//Source: outOfBounds.c
int main(void){
  int A[10]={0,1,2,3,4,5,6,7,8,9};
  printf("A[4] is %d\n", A[4]);
  printf("A[94] is %d\n", A[94]);
  //A[10004]=9;
  return 0;
}


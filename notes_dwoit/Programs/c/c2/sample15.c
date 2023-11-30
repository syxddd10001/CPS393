/*Source: sample15.c */
#include <stdio.h>
#include <stdlib.h>
//2 different ways to write swap
void swap1 (int X[2] );
void swap2 (int *X );
int main(void) {
  int A[2]={1,2};
  printf("%d %d \n", A[0], A[1] );
  swap1(A);
//swap2(A);
  printf("%d %d \n", A[0], A[1] );
  exit(0);
}
void swap1 (int X[2] ) {
  int temp;
  temp = X[0];
  X[0] = X[1];
  X[1] = temp;
}
void swap2 (int *X ) {
  int temp;
  temp = *X;
  *X = *(X+1);
  *(X+1) = temp;
}

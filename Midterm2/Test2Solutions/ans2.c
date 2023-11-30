//to compile: gcc ans2.c ans2F.o
#include <stdio.h>
#include <stdlib.h>
#include "ans2F.h"

int main (void) {
  int **A = getPointer(1,2,3,4,5,6); 
  int i,sum=0;
  //print first 5 integers followed by '+'
  for (i=0;i<5;i++) {  
    sum=sum+*(A[i]);
    printf("%d+",*(A[i]));
  }
  //print last integer followed by '=' and sum
  sum=sum+*(A[i]);
    printf("%d=%d\n",*(A[i]),sum);
  exit (0);
}

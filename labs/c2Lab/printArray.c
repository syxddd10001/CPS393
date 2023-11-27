#include <stdio.h>
#define LEN 5
void printit(int X[LEN]) ;

int main (void) {
  int A[LEN]={1,2,3,4,5};
  printit(A+2);
  
}


void printit(int X[LEN]) {
  int i;
  for (i=0;i<LEN; i++ )
      printf("%d ", X[i]);
  printf("\n");
}


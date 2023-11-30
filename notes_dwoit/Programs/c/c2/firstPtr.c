#include <stdio.h>
int main(void) {
  
  int Num;
  int *NumPtr;

  Num=5;
  NumPtr = &Num;
  printf(" %d  \n", *NumPtr );
  *NumPtr = 7;
  printf(" %p %d %d   \n", NumPtr, *NumPtr, Num );

  return(0);
}


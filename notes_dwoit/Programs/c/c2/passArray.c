/*Source: passArray.c  */
#include <stdio.h>
#include <stdlib.h>
#define LEN 5

void doubleit(int *X) {   //or int X[]
  int i;
  for (i=0;i<LEN; i++ ) 
    X[i]=X[i]*2;
  return;
}
//const means values POINTED TO by X cannot be changed
//X itself can be changed, but only locally (inside printit)
void printit(const int *X) {  //or int X[]
  int i;
  for (i=0;i<LEN; i++ )
      printf("%d ", X[i]);
  printf("\n");
  //X[i]=i;  //this is not permitted by compiler
  //X=&i;    //permitted but change local to printit only
}

int main (void) {
  int i, A[LEN];
  for (i=0;i<LEN; i++ )
      scanf("%d",&A[i]);
  doubleit(A);
  printf("A after doubleit is: ");
  printit(A);
}

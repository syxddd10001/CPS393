/*Source: cmplx.c*/
/* answering HMWK quesion */
#include <stdio.h>
#include "cmplx.h"

complex MakeComplex( int x, int y) {
  complex temp;
  temp.r=x; temp.i=y;
  return(temp);
}

complex ReadIt() {
  complex temp;
  scanf("%d %d", &temp.r, &temp.i);
  return(temp);
}

void WriteSum(complex c1, complex c2) {
     printf("%d + %di\n", (c1.r)+(c2.r), (c1.i)+(c2.i));
}

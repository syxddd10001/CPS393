/*Source: main.c
  example of how to hide details of ADT from user
  by keeping struct details out of complex.h, and only in complex.c
*/
#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

int main (void) {
  complex *m;
  set(&m,7,2);
  print(m);
return 0;
}

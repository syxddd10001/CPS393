//source: var1.c
#include <stdio.h>
#include <stdarg.h>

int sumargs (int count,...) {
  va_list ap;
  int i, total;

  va_start(ap, count);      //initialize argument list


  total  = 0;
  for (i = 0; i < count; i++)
    total = total + va_arg(ap, int); //get next argument 

  va_end(ap);               //cleanup for ap. Required.
  return total;
}

int main (void) {
  printf ("%d\n", sumargs (4, 2, 1, 2, 10)); //15
  printf ("%d\n", sumargs (10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10)); //55
  printf ("%d\n", sumargs (0)); //0
  return 0;
}


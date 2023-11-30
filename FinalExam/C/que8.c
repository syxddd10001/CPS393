#include <stdio.h>
#include <stdlib.h>
#include "que8.h"

typedef struct {
  int i;
  int j;
  } priv_complex;

void set(complex **a, int real, int imag) {
  priv_complex *new;
  new=XXXXXXX
  XXXXXXX
  XXXXXXX
  (*a)=XXXXXXXnew;
}
void print(complex *a) {
  printf("%d+%di\n", (*(priv_complex *)a).i, (*(priv_complex *)a).j);
}

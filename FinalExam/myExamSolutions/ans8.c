#include <stdio.h>
#include <stdlib.h>
#include "que8.h"

typedef struct {
  int i;
  int j;
  } priv_complex;

void set(complex **a, int real, int imag) {
  priv_complex *new;
  new=(priv_complex *)malloc(sizeof(priv_complex));
  new->i=real; //or (*new).i=real;
  new->j=imag; //or (*new).j=imag;
  (*a)=(complex *)new;
}
void print(complex *a) {
  printf("%d+%di\n", (*(priv_complex *)a).i, (*(priv_complex *)a).j);
}

//Source complex.c
//This source code is NOT given to user (only its .o file)
#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

typedef struct {
  int i;
  int j;
  } priv_complex;

void set(complex **a, int v, int w) {
  priv_complex *new;
  new=(priv_complex *)malloc(sizeof(priv_complex));
  (*new).i=v;
  (*new).j=w;
  (*a)=(complex *)new;
}
void print(complex *a) {
  printf("%d+%di\n", (*(priv_complex *)a).i, (*(priv_complex *)a).j);
}


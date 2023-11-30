//source: ext4.c
#include <stdio.h>
#include "ext.h"
extern int x;
int main(void) {
  x=5;
  printf("x=%d\n",x);
  return 0;
}

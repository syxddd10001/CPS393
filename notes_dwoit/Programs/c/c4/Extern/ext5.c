//source: ext5.c
#include <stdio.h>
extern int x=2;
int main(void) {
  x=5;
  printf("x=%d\n",x);
  return 0;
}

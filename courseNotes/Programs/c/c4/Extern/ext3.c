//source: ext3.c
//this won't compile
#include <stdio.h>
extern int x;
int main(void) {
  x=5;
  printf("x=%d\n",x);
  return 0;
}

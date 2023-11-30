/*Source: trypas.c*/
#include <stdio.h>
#include <stdlib.h>
void f1(int num[5],int loc), f2(int num[],int loc);
int main(void) {
  int i,loc=0;
  int count[5] = {0,0,0,0,0};
  f1(count,loc);
  f2(count,loc);
  printf("count=");
  for (i=0; i<5; i++) printf("%d ", count[i]);
  printf("\nloc=%d\n",loc);
  exit(0);
}
void f1(int count[5],int loc) {
  count[0] = 99;
  loc=99;
}
void f2(int count[],int loc) {
  count[1] = 22;
  loc=22;
}

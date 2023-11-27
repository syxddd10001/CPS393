/*sample9.c*/
#include <stdio.h>
void f(int i);
int main(void) {
  int i=0;
  printf("%d",i);
  f(i);
  printf("%d",i);
  printf("\n");
  return 0;
}
void f(int i) {
  printf("%d",i);
  i=1;
  printf("%d",i);
}

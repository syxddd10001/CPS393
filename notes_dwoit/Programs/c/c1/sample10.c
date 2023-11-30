/*sample10.c*/
#include <stdio.h>
void f(void);
int i,k;
int main(void) {
  int j=0;
  i=10;k=10;    /*global*/
  f();
  printf("%d %d\n",i,k);
  return 0;
}
void f(void) {
 int i=20;
 k=5;
} 

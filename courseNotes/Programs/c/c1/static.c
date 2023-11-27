#include <stdio.h>
void f(void);

int main(void) {
  f();
  f();
  f();
  f();
  return 0 ;
}
void f(void) {
 static int i;
 i=i+2;
 printf("%d\n",i);   
}



/*Purpose: to demonstrate ++ and -- */
/*sample3a.c*/
#include <stdio.h>
int main(void) {
  int i,j,a,b,c;
  i=1;  j=i++; printf("%d %d\n",i,j);
  i=1; j=++i; printf("%d %d\n",i,j);
  a=b=c=0;
  a=++b + c--; printf("%d %d %d\n",a,b,c);
}


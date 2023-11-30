/*Source: struct6.c*/
#include <stdio.h>
struct complex {
                 int r;
                 int i;
       }; 
struct complex ReadIt(void);

int main(void) {
  struct complex X;
  X=ReadIt();
  printf("%d + %di\n",X.r, X.i);
  return 1;
}
struct complex ReadIt() {
  struct complex temp;
  scanf("%d %d", &temp.r, &temp.i);
  return(temp);
}


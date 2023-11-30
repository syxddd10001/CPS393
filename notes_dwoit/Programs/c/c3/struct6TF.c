/*Source: struct6TF.c*/
/* answering HMWK quesion */
#include <stdio.h>
typedef struct {
                 int r;
                 int i;
       }complex; 
complex ReadIt(void);

int main(void) {
  complex X;
  X=ReadIt();
  printf("%d + %di\n",X.r, X.i);
  return 1;
}
complex ReadIt() {
  complex temp;
  scanf("%d %d", &temp.r, &temp.i);
  return(temp);
}


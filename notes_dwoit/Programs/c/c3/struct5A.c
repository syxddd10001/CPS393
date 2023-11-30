/*Source: struct5A.c*/
#include <stdio.h>
struct complex {
                 int r;
                 int i;
       };
void WriteSum(struct complex c1, struct complex c2);

int main(void) {
  struct complex A1, A2;
  A1.r = 4; A1.i = 7;     // 4 + 7i
  A2.r = 3; A2.i = -1;    // 3 -  i

  WriteSum(A1,A2);
  printf("main says A2 is: %d + %di\n",A2.r,A2.i);
  return 0;
}
void WriteSum(struct complex c1, struct complex c2) {
     c2.r=99;        //CHANGED c2 (A2)
     c2.i=77;        //CHANGED c2 (A2)
     printf("%d + %di\n", (c1.r)+(c2.r), (c1.i)+(c2.i));
}


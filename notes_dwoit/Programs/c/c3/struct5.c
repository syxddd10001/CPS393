/*Source: struct5.c
  Program makes 2 complex numbers, and passes them
  to function WriteSum to display their sum
*/
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
  return 0;
}
void WriteSum(struct complex c1, struct complex c2) {
     printf("%d + %di\n", (c1.r)+(c2.r), (c1.i)+(c2.i));
}


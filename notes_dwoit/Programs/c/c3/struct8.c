/*Source: struct8.c*/
#include <stdio.h>
struct complex {
                 int r;
                 int i;
       };
void ReadIt(struct complex *c);
void WriteIt(struct complex p);

int main(void) {
  struct complex A1, A2;
  ReadIt(&A1);
  WriteIt(A1);
  ReadIt(&A2);
  WriteIt(A2);
  return 0;
}
void ReadIt(struct complex *c) {
  printf("Enter complex: ");
  scanf("%d %d",&(c->r), &(c->i));
  printf("Read in: %d + %di\n",c->r, c->i);
}

void WriteIt(struct complex c) {
     printf("Write it: %d + %di\n", c.r, c.i);
}

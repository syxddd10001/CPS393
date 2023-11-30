/*Source: struct9.c*/
#include <stdio.h>
struct complex {
                 int r;
                 int i;
       };

void ScalarMult(int i, struct complex *p);
void PrintComplex(struct complex *p);

int main(void) {
  struct complex C={4,-2};

  ScalarMult(3,&C);
  PrintComplex(&C);
  return 0;
}
void ScalarMult(int m, struct complex *p) {
//pointer is required since mutating p
  p->r = p->r * m;
  p->i = p->i * m;
}

void PrintComplex(struct complex *c){
//pointer unnecessary since not mutating p
     //printf("%d + %di\n", c->r, c->i);
     printf("%d + %di\n", (*c).r, (*c).i);
}


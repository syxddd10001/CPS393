//source: M.c
//compile with F.c 
#include <stdio.h>
void A(void);
void B(void);
int main (void) {
 extern int x;   //F.c's global x
 //int x;        //local (to main) x
  A();
  x=19;
  B();
  printf("main says x=%d\n",x);
 
}


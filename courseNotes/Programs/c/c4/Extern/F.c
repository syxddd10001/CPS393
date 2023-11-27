//source:  F.c

/*Suppose F.c is trying to define x to be global
  to F.c and G.c only.
  However, if F.c is compiled with another file that has
  extern int x;
  that other file will be able to access F.c's x
  (M.c does this).
  Changing x to static stops M.c getting x, but stops
  F.c from sharing x with G.c
*/
#include <stdio.h>
void B(void);
int x;
void A(void) {
  x=1;
  printf("A says x=%d\n",x);
  x=2;
}


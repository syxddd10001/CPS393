//source:  G.c
//compile with M.c F.c

#include <stdio.h>
extern int x;

void B(void) {
  printf("B says x=%d\n",x);
}

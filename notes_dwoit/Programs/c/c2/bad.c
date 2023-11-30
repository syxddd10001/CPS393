/*Source: bad.c    */
#include <stdio.h>
int main (void) {
  char *p;
  fgets(p,40,stdin);
  printf("%s",p);
  return 0;
}

/*Source:tryfgets.c*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int i;        /*index*/
  char str[7]; /*string max 7 chars*/

  printf("Enter a string (max 5 chars):"); //leave slots for newline and null
  fgets(str,7,stdin);
  fputs(str,stdout);
  exit(0);
}

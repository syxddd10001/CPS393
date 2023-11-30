/*Source:tryfgetsSmall.c
  Try entering string ABC and next time ABCD
 */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int i;        /*index*/
  char str[5]; /*string max 4 chars*/

  printf("Enter a string (max 3 chars):"); //leave slots for newline and null
  fgets(str,5,stdin);
  fputs(str,stdout);

  for (i=0;i<5;i++) 
     printf("   str[%d] is between Xs:XXX%cXXX\n",i,str[i]);

  //printf("next char is %c\n",getchar());
  exit(0);
}

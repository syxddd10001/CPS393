/*Source:str1.c*/
#include <stdio.h>
int main(void) {
  int i;        /*index*/
  char str[40]; /*string max 39 chars*/

  printf("Enter a string (max 39 chars):");
  gets(str);
  for (i=0; str[i]; i++)  /*loops until str[i] is 0 */
       printf("%c",str[i]);
  /* same as
    printf("%s",str);
  */
  putchar('\n');
  return 0;
}

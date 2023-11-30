/*sample11A.c*/
/* If enter:
ABC
   Then c4 is the enter key (carriage-return)
*/
#include <stdio.h>
int main(void) {
  char c1, c2, c3, c4;
  /*read in 3 chars*/
  c1=getchar();  
  c2=getchar();  
  c3=getchar();  
  putchar(c1); putchar(c2); putchar(c3); 
  c4=getchar();  
  putchar(c4); 
  printf("ascii codes of c[1-4] are: %d %d %d %d\n",c1,c2,c3,c4);
  return 0;
}

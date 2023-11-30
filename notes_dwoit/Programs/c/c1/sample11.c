/*sample11.c*/
#include <stdio.h>
int main(void) {
  char c;
  c=getchar();  /*read in 1 char*/
  printf("you entered a %c\n",c);
  printf("In case you missed that, it was a: ");
  putchar(c);
  putchar('\n');
  printf("char %c has ASCII code %d\n",c,c);
  printf("char %c+1 is %c \n",c,c+1);
  return 0;
}

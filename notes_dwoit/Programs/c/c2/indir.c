#include <stdio.h>
#include <stdlib.h>
int main(void) {
char **mp, *p, ch;
p=&ch; mp=&p; **mp='A';
printf("ch is %c\n",ch);
printf("*p is %c\n",*p);
printf("**mp is %c\n",**mp);
exit(0);
}


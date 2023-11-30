#include <stdio.h>
#include <stdlib.h>
int main(void) {
char S[11]="Pointers";
//int i;
char *cptr;
cptr=S;
//for (i=0; i<8; i++) putchar(*cptr++);
//or
//while ( *cptr ) putchar(*cptr++);
//while ( *cptr != '\0' ) {
//   putchar(*cptr);
//   cptr++;
//}
while ( putchar(*cptr++) ) ;
exit(0);
}

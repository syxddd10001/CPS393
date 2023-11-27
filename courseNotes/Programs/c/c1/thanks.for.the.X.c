#include <stdio.h>
#include "convertcf.h"
int main (void) {
char c;
while ( c=getchar() != 'X');   //mistake
//while ( (c=getchar()) != 'X');
printf("Thanks for finally inputting an X!!");
printf("The value of c is %c\n",c);


return 0;
}


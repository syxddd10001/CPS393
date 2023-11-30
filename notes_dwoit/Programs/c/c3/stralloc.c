/*source: stralloc.c*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
char *A;
int max=0;

//need to add error-checking
printf("enter max string length: ");
scanf("%d",&max); while ((getchar())!='\n');
A=(char *)malloc(max+1); //room for null char
printf("enter string: ");
fgets(A,max+1,stdin);
printf("Third char is: %c\n",*(A+2));
printf("string is: %s\n",A);
exit(0);
}

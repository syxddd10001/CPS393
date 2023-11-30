#include <stdio.h>
#include <stdlib.h>

void swap_string( char **S1, char **S2) {
 char *temp;
 temp=*S1;
 *S1=*S2;
 *S2=temp;
}

int main (void) {
 char *X=malloc(11), *Y=malloc(11);
 scanf("%s %s",X,Y);
 printf("X:%s, ", X); printf("Y: %s\n", Y);
 swap_string(&X, &Y);
 printf("X:%s, ", X); printf("Y: %s\n", Y);
 return 0;
}


//Source: swap_string2.c
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 6
 
void swap_string2( char **A, char **B) {
 char *Z;
 Z=*A;
 *A=*B;
 *B=Z;
}

int main (void) {
 char *X, *Y;
 X=malloc(L); //error check this
 Y=malloc(L); //error check this
 //L-2 below to ensure \n is read (otws Y gets tail of line1).
 printf("Enter string1 (max length %d) : ",L-2);
 fgets(X,L,stdin);   //error-check length
 *(strchrnul(X,'\n'))='\0';  //remove newline, if there
 printf("Enter string2 (max length %d) : ",L-2);
 fgets(Y,L,stdin);
 *(strchrnul(Y,'\n'))='\0';
 printf("X: %s  ", X); printf("Y: %s\n", Y);
 swap_string2(&X, &Y);
 printf("X: %s  ", X); printf("Y: %s\n", Y);

}

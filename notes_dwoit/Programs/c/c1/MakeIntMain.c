#include <stdio.h>

int MakeInt(); /*this should really be in header file*/ 
int main(void) {
  printf("int made with MakeInt is: %d\n",MakeInt());
  return (0);
}



/* once we  know arrays and strings could just use atoi from ctype.h
    char S[20]="125";
    int x=atoi(S);
    printf("string %s is integer %d using atoi from ctype.h\n",S,atoi(S));
*/



/* Source scanset.c 
   Using scanf to limit read-in chars to those in A-Z
   Try with input: ABCdefGHI
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  char A[40], B[40];
  int i;
  /*scanf("%[A-Z]%d%[A-Z]",A,&i,B);*/
  scanf("%[A-Z]",A);
  gets(B);
  printf("A is %s\n",A);
  printf("B is %s\n",B);
  /*printf("i is %d\n",i);*/
  exit(0);
}

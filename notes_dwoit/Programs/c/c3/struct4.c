/*Source:  struct4.c */
#include <stdio.h>
int main(void) {
  typedef struct {
               char A[4];
               char B[4];
               char c;
         } thing;

printf("size of car is %lu \n",sizeof(thing));
return 0;
}

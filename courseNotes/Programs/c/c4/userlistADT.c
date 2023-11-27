
/*Source userlistADT.c
  a user program that uses object code from listADT.o
  compile: gcc userlistADT.c listADT.o
*/
#include <stdio.h>
#include <stdlib.h>
#include "listADT.h"

int main(void) {
  List L;
  init(&L);
  add(&L,'a'); add(&L,'b'); add(&L,'c');       
  print(L);
  printf("Length is %d\n",length(L));
return 0;
}

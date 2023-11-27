#include <stdio.h>
#include "list.h"
void listPrint(NodeType *List) {
  NodeType *ptr;
  for (ptr=List; ptr!=NULL; ) {
   printf(" %c ", ptr->ch);
   ptr=ptr->next;
 }
 printf("\n");
}


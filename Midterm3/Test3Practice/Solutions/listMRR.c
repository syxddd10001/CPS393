#include <stdlib.h>
#include "list.h"
#include "listAddFront.h"
#include "listPrint.h"
#include "listRemoveRear.h"

int main(void) {

 NodeType *List;
 List=NULL;
 char ch;
 int remRet;

 for (ch='a'; ch<'f';ch++) listAddFront(&List,ch);

 printf("List is: ");
 listPrint(List);

 for (int i=1; i<=6; i++) {
   remRet=listRemoveRear(&List,&ch);
   if (remRet == 1) {
     printf("removed %c. List is now:",ch);
     listPrint(List);
   } else printf("cannot remove from empty list\n");
 }

}

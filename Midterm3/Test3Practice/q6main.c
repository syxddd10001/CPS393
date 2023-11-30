#include <stdlib.h>
#include "list.h"
#include "listAddFront.h"
#include "listPrint.h"
#include "listRemoveRear.h"
#include "listRemoveFront.h"
int main(void) {

 NodeType *List;
 List=NULL;
 char ch;
 int remRet;

 for (ch='a'; ch<'f';ch++) listAddFront(&List,ch);


 printf("List is: ");
 listPrint(List);

 
 for (int i=1; i<=6; i++) {
   remRet=listRemoveFront(&List,&ch);
   if (remRet == 1) {
     printf("removed %c. List is now:",ch);
     listPrint(List);
   } else printf("cannot remove from empty list\n");
 }
/*   int idx;
   printf("Which element do u want to remove? \n");
   fscanf(stdin, "%d", &idx);
   remRet=listRemoveN(&List,&ch, idx);
   if (remRet == 1) {
     printf("removed %c. List is now:",ch);
     listPrint(List);
   } else printf("cannot remove from empty list\n");
*/
}

/*Source insertOmain.c
  program to use function InsertO (in file insertO.c) to add to 
  ordered list
*/
#include <stdio.h>
#include "insertO.h"

int main(void) {

 NodeType *List,   /*a list, like in scheme, except all char*/
          *ptr;    /*a temp var to move along a list, node by node*/
 char     ch;      /*char to add to front of list*/

 List=NULL;

/*add each to ordered list*/
   InsertO(&List,'b');  
   InsertO(&List,'c');  
   InsertO(&List,'a');  
   InsertO(&List,'d');  

 printf("List is: ");  /*print list*/
 for (ptr=List; ptr!=NULL; ) {
   printf(" %c ", ptr->ch);
   ptr=ptr->next;
 }
 printf("\n");

return 0;
}

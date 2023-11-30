/*Source addNMmain.c
  like addmain.c, except the Add function RETURNS the "new" list
  Answers HMWK question
*/
#include <stdio.h>
#include "addNM.h"

int main(void) {

 NodeType *List,   /*a list, like in scheme, except all char*/
          *ptr;    /*a temp var to move along a list, node by node*/
 char     ch;      /*char to add to front of list*/

 List=NULL;

/*add a b c d e, each to front of list*/
 for (ch='a'; ch<'f';ch++) 
   List=Add(List,ch);       

 printf("List is: ");  /*print list*/
 for (ptr=List; ptr!=NULL; ) {
   printf(" %c ", ptr->ch);
   ptr=ptr->next;
 }
 printf("\n");

return 0;
}

/*Source addmain.c
  program to use function Add (in file add.c) to add to front
  of a list
*/
#include <stdio.h>
#include "c4Labq02add.h"

int main(void) {

 NodeType *List,   //a list
          *ptr;    //a temp var to move along a list, node by node
 char     ch;      //char to add to front of list

 List=NULL;

 for (ch='a'; ch<'f';ch++)   //add a b c d e, each to front of list
   Add(&List,ch);            //need & so List can be changed

 printf("List is: ");  /*print list*/
 for (ptr=List; ptr!=NULL; ) {
   printf(" %c ", ptr->ch);
   ptr=ptr->next;
 }
 printf("\n");

return 0;
}

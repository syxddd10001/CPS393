/*Source addmainS.c
  compile: gcc addmainS.c add.c search.c
*/
#include <stdio.h>
#include <stdlib.h>
#include "add.h"
#include "search.h"

int main(void) {

 NodeType *List,   /*a list, like in scheme, except all char*/
          *ptr;    /*a temp var to move along a list, node by node*/
 char     ch;      /*char to add to front of list*/
 char     item;    /*char to search for*/

 List=NULL;

 for (ch='a'; ch<'f';ch++)
 Add(&List,ch);

 printf("List is: ");  
 for (ptr=List; ptr!=NULL; ) {
   printf(" %c ", ptr->ch);
   ptr=ptr->next;
 }
 printf("\n");

 /*repeatedly search for a given item in list*/
 printf("Enter char to search for (EOF to quit): ");
 item=getchar();
 while (item!=EOF) {
    if ((Srch(List,item))==1) printf("%c found\n",item);
    else printf("%c not found\n",item);
    getchar();  //read enter key
    printf("Enter char to search for (EOF to quit): ");
    item=getchar();

 }

return 0;
}

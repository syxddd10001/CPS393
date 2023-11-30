/*Source list.c
  Making the list is done "by hand" here for illustration, but you
  would normally write a function, such as Add, so that a call
  such as Add(List,'a') would add an 'a' to the front of the List
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node NodeType;

struct node {
        char ch;
        NodeType *next;
   };

int main(void) {

NodeType *Node,   /*a list node*/
         *List,   /*a list*/
         *ptr;    /*a temp var to move along a list, node by node*/

List=NULL;       // _____
                 // | - |    The empty list, where "-" is null ptr
                 // -----
                 //  List

Node=(NodeType *) malloc(sizeof(NodeType));
(*Node).ch='a';                   // ____   ______
(*Node).next=NULL;                // | -|-->|a |-| where "-" is null ptr
                                  // ----   ------
                                  // Node

printf("Node.ch: %c\n", (*Node).ch);      
printf("Node.next: %p\n", (*Node).next);   
                                           // ____   ______ 
List=Node;                                 // | -|-->|a |-| 
printf("List.ch: %c\n", (*List).ch);       // ----   ------
printf("List.next: %p\n", (*List).next);   // List

Node=(NodeType *) malloc(sizeof(NodeType));
(*Node).ch='b';                   // ____   ______
(*Node).next=NULL;                // | -|-->|b |-| 
                                  // ----   ------
                                  // Node

(*Node).next=List;                // ____   ______   _____
List=Node;                        // | -|-->|b |-|-->|a |-| 
                                  // ----   ------   ------
                                  // List
/*print out list*/

printf("------------\nList is:\n------------\n ");
for (ptr=List; ptr!=NULL; ) {
  printf(" %c ", (*ptr).ch);
  ptr=(*ptr).next;
}
printf("\n");

printf("------------\nDetail :\n------------\n");
for (ptr=List; ptr!=NULL; ) {
  printf("List.ch: %c\n", (*ptr).ch);
  printf("List.ch %p List.next: %p\n", &((*ptr).ch), (*ptr).next);
  ptr=(*ptr).next;
}

return 0;
}


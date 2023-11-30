/*Source addNM.c
  function to add a char to the front of a list 
  Answers HMWK question
*/
#include <stdio.h>
#include <stdlib.h>
#include "addNM.h"

/*Note: do not need to pass address of L because it is
  not being changed. The "new" list returned, conists of
  the original list with a new node on the front.
*/
NodeType *Add(NodeType *L, char c) {

NodeType *new;
new=(NodeType *) malloc(sizeof(NodeType));
new->ch=c;
new->next=L;
return new;
}

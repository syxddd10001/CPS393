#include <stdlib.h>
#include "list.h"
void listAddFront(NodeType **L, char c) {

NodeType *new;
new=(NodeType *) malloc(sizeof(NodeType)); 
new->ch=c;
new->next=*L;
*L=new;
}


#include <stdlib.h>
#include "list.h"
int listRemoveRear(NodeType **List, char *C) {

  NodeType *current, *last;
  //empty list
  if (*List == NULL) return 0;  

  //1-item list
  current=*List;
  if (current->next == NULL ) {
    *C= current->ch;
    *List = NULL;       //unlink the node from list
    free (current);     //free its storage
    return 1;
  }

  //list has at least 2 items. 
  //set current to point to the second last item on list
  while ( current->next->next != NULL) current=current->next;

  last=current->next;    //last points to last item on list
  *C= last->ch;          
  current->next=NULL;    //unlink last item from list
  free(last);            //free original last item
  return 1;
}


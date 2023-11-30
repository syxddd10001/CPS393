/*Source add.c
  function to add a char to the front of a list 
*/
#include <stdio.h>
#include <stdlib.h>
#include "add.h"

/*Note: need to pass address of L so that it is call by value
  if just passed *L, any changes to L inside function would
  be lost upon function return. e.g., calling Add(List,ch)
  would not cause List to be changed after add return
*/
void Add(NodeType **L, char c) {

NodeType *new;
new=(NodeType *) malloc(sizeof(NodeType));
new->ch=c;
new->next=*L;
*L=new;
}

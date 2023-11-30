/*Source insertO.c
  function to add a char to the front of a list 
*/
#include <stdio.h>
#include <stdlib.h>
#include "insertO.h"

/*Note: need to pass address of L so that it is call by value
  if just passed *L, any changes to L inside function would
  be lost upon function return. e.g., calling InsertO(List,ch)
  would not cause List to be changed after insertO return
*/
void InsertO(NodeType **L, char c) {

  NodeType *new;
  NodeType *prev,*p;
  new=(NodeType *) malloc(sizeof(NodeType));
  new->ch=c;

  //if L is empty add new
  if ((*L)==NULL) {
     new->next=*L;
     *L=new;
     return;
  }

  //if new goes at start of list, insert it there
  if (c<(*L)->ch) {
     new->next=*L;
     *L=new;
     return;
  }

  //if new goes somewhere inside list, find spot and insert it
  //between nodes prev and p
  prev=(*L);
  for (p=prev->next; p != NULL; p = p->next) {
     if (p->ch < c)                //move along list
        prev=prev->next;
     else {                        //insert new between prev and p
       prev->next = new;
       new->next = p;
       return;
     }
  }
  //item must go at end of list (after prev)
  prev->next=new;
  new->next=NULL;
  return;
  
}

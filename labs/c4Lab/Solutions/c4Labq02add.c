/*Source c4Labq02add.c
  function to add a char to the front of a list 
*/
#include <stdio.h>
#include <stdlib.h>
#include "c4Labq02add.h"

/*Note: need to pass address of L so that it is call by value
  if just passed *L, any changes to L inside function would
  be lost upon function return. e.g., calling Add(List,ch)
  would not cause List to be changed after add return
*/
void Add(NodeType **L, char c) {

  NodeType *new;
  NodeType *p;      //points to current node in list traversal
  new=(NodeType *) malloc(sizeof(NodeType));
  new->ch=c;
  new->next=NULL;   //because new node will be at end of list

  //special case of adding first item to currently empty list
  if ((*L)==NULL) 
     *L=new;
  else {           
     p=*L;
     while ((p->next)!=NULL) //traverse until p points to last node
        p=p->next; 
     p->next=new;            //add new after current last node
  }
}

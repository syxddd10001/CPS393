#include "c4Labq02add.h"
#include <stdlib.h>
void Add(NodeType **L, char c) {
	if ((*L) == NULL) {
		NodeType *new;
                new=(NodeType *) malloc(sizeof(NodeType));
                new->ch=c;
                new->next=NULL;
                (*L)=new;
	}
	else if ((*L)->next == NULL)
	{	
		NodeType *new;
		new=(NodeType *) malloc(sizeof(NodeType));
		new->ch=c;
		new->next=NULL;
		(*L)->next=new;
	}
	else{
		Add(&(*L)->next, c);
	}

	return;
	
}

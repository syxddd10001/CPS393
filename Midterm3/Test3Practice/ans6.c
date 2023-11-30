#include "listRemoveRear.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
int listRemoveRear(NodeType **List, char *C){
	
	if (*List == NULL) return 0;

	else if ((*List)->next == NULL){
		*C = (*List)->ch;
		(*List) = NULL;
		free(*List);
		return 1;
	}

	else{
		listRemoveRear(&(*List)->next,C);	
	}

	return 1;

}

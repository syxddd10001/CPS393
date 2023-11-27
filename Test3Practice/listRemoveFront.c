#include "listRemoveFront.h"
#include <stdlib.h>
#include <stddef.h>

int listRemoveFront(NodeType **List, char *C){
	if (*List == NULL){
		return 0;
	} 
	
	else {	
		*C = (*List)->ch;
		*List = (*List)->next;
		
		return 1;
	}	
}


int listRemoveN(NodeType **List, char *C, int n){
	if (*List == NULL) return 0;

	if (n == 0){
		*C = (*List)->ch;
		NodeType* tmp = *List;
		*List = (*List)->next;
		free(tmp);
		return 1;
	} 
		
	else{
		listRemoveN(&(*List)->next, C, n-1);
	}

	return 1;
}

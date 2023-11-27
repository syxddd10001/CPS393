#include <stdlib.h>
#include "list.h"
#include "listAddFront.h"
#include "listPrint.h"

int main(void) {

 NodeType *List;
 List=NULL;
 char ch;
 int remRet;

 for (ch='a'; ch<'f';ch++) listAddFront(&List,ch);

 printf("List is: ");
 listPrint(List);

}

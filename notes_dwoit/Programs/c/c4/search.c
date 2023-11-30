/*source: search.c
  Search a list to determine if given charater is in list*/
#include "search.h"
#include <stdio.h>
int Srch(NodeType *L, char item) {
  NodeType *p;
  for (p=L; p != NULL; p = p->next)
    if (p->ch == item) return 1;
  return 0;
}

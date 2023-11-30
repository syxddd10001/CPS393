//source: globMain.c
#include "globVars.h"
#include "globFuncs.h"
#include <stdio.h>

int main(void) {
  showx();
  x = x+20;
  printf("did x+20\n");
  showx();
  addone();
  printf("did addone\n");
  showx();
  return 0;
}

/*main function to call mystrcmp found in ans3.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ans3.h"
int main (void) {
  char S1[52], S2[52];
  //allow max 50 to force \n to be read into both strings so that
  //it appears in both (rather than in one and not the other).
  printf("Enter string1 (max: 50 characters): "); fgets(S1,52,stdin);
  printf("Enter string2 (max: 50 characters): "); fgets(S2,52,stdin);
  int c=mystrcmp(S1,S2);
  if (c<0)      printf("S1<S2\n");
  else if (c>0) printf("S1>S2\n");
  else          printf("S1=S2\n");
  exit(1);
}


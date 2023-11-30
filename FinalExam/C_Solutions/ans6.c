#include <stdio.h>
#include <stdlib.h>
int Xcount(char *S) {
  char c;
  int sum=0;
  FILE *fp;
  fp=fopen(S,"r");
  while ((c=fgetc(fp))!=EOF) if (c=='X') sum++;
  return sum;
}
int main (void) {
  printf("que6.inF1: %d X characters\n",Xcount("que6.inF1")); //9 Xx
  printf("que6.inF2: %d X characters\n",Xcount("que6.inF2")); //0 Xs
  printf("que6.inE1: %d X characters\n",Xcount("que6.inE1")); //0 empty file
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
  int len = strlen(argv[2]);
  int n = atoi(argv[1]);
  //newString needs one extra for \0 so needs size (n*len)+1
  //note calloc(n+1,len) allocates extra unused storage
  //so instead using calloc as below
  //char *newString = malloc((n*len)+1);  //if using malloc
  char *newString = calloc(1,(n*len)+1);
  for (int i=1;i<=n;i++)
    newString=strcat(newString,argv[2]);
  printf("newString=%s\n",newString);
  exit(0);
}

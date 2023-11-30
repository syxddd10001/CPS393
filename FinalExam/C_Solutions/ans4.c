#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *newString( char *str1, char *str2) {
  char *S=malloc(strlen(str1)+strlen(str2)+1);
  strcpy(S,str1);
  strcat(S,str2);
  return S;
}

int main (void) {
  char *S = newString("ABcd","efgHI");
  printf("Called newString with ABcd and efgHI\n");
  printf("It returned: %s\n", S);
  printf("with length: %ld\n", strlen(S));
  return 0;
}

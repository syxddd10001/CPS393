/*Source: sample16.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *addXX(char *B);
int main(void) {
  char str1[25], *str2;
  gets(str1);         
  str2=addXX(str1);
  puts(str2);
  exit(0);
}
char *addXX(char *B) {
  strcat(B,"XX");
  return (B);
}


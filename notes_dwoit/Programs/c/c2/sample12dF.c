/*Source: sample12dF.c                     */
/*Input:  a string max length 39           */
/*Output: the string in upper case         */
/*Purpose: convert string to upper case    */
/*         is sample12d.c without gets     */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void removeNewline(char *S);
int main(void) {
  char str[40], *p; 

  printf("Enter a string: ");
  //(void) gets(str); //will produce a warning
  fgets(str,40,stdin);
  removeNewline(str);
  p=&str[0];
  while ( *p != '\0' ) {
    *p = toupper(*p);
    p++;
  }
  printf("%s\n",str);
  //printf("str=%c str+1=%c str+2=%c\n",*str,*str+1,*str+2);
  exit(0);
}


void removeNewline(char *S) {
  char *p;
  /*
  while (*p != '\n' && *p != '\0' ) {
    p++;
  }
  if (*p == '\n' ) *p='\0';
  */
  if ((p=strchr(S, '\n')) != NULL) //if there is a newline
      *p = '\0';
}

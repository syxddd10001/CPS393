/*Source tryrplus.c
  Purpose: read and write into file opened with r+ 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   FILE *fp;
   char  str[100];
   if ((fp = fopen("tryrplusFILE","r+"))==NULL) {
      fprintf(stderr,"fopen: Cannot open file\n");
      exit( 1); /*assume defined*/
   }
   fprintf(fp,"NEW TEXT\n");
   fprintf(stdout,"Read these lines from file:\n");
   while ( fgets(str,100,fp) ) {
      fprintf(stdout,"%s",str);
   }
   exit(0);
}

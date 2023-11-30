#include <stdio.h>
#include <stdlib.h>
int main(void) {
  FILE *fp;

  if ((fp=fopen("BinFile", "r"))==NULL) {
       perror("fopen");
     //fprintf(stderr, "Cannot open file\n");
     exit(0);  /*failure*/
  }
  exit(1); /*success*/
}

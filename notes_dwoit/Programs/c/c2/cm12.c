/*Source:  cml2.c
  Purpose: print max of 2 int arguments
*/
#include <stdio.h>
#include <stdlib.h>
#define GoodInput 0
#define BadInput 1
int main (int argc, char *argv[]) {
   
    if (argc != 3 ) {
       fprintf(stderr, "Usage: %s int1 int2\n", argv[0]);
       exit(BadInput);
    }
    if (atoi (argv[1]) > atoi (argv[2]) )
         fprintf(stdout, "%s\n", argv[1]);
    else fprintf(stdout, "%s\n", argv[2]);
    exit(GoodInput);
}

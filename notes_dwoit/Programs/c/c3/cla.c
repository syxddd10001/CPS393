/*Source:  cla.c
  Purpose: to print command line arguments
  Input:   expects any number of command line arguments
  Output:  the clas one per line
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int i;     /*loop index*/

    for (i=1; i<argc; i++) {
        printf("command line argument %d is: %s\n", i, argv[i]);
    }
    printf("Name of program is: %s\n", argv[0]);
    printf("argv[2][1] is: %c\n", argv[2][1]);
    exit(0); 
}

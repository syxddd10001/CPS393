/*Source:  sum.c
  Purpose: to sum the integers supplied
           in the command line
  Input:   any number of integers in command line
  Output:  the sum of the inputted numbers
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, char *argv[]) {
    int j,i,     /*for loop index*/
    sum=0;     /*the sum of the arguments*/

    for (i=1; i<argc; i++) {
      j=0;
      while(argv[i][j]!='\0') {
	if (!isdigit(argv[i][j])) {
	    fprintf(stderr,"%s: input error\n",argv[0]);
	    exit(1);
	    }
        j++;}
        /*convert a string to its integer equiv*/
        sum = sum + atoi(argv[i]);
    }
    printf("Sum of the %d integers is %d\n", argc-1, sum);
    exit(0); 
}

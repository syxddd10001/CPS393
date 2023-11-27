#include <stdio.h>
#include "c1Labq01F.h"

int main (void) {
  char c, scale;
  float temp;
  while ( putchar(c=getchar()) !='\n') ;         //print headings line
  
  while ( scanf("%f %c",&temp,&scale) != EOF ) { //read input line
     if ( scale == 'F' )                         //convert if necessary
        temp = tocelsius(temp);                  
     printf("%.1f\tC\n",temp) ;                  //print output line
  }   
}

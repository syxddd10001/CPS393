#include <stdio.h>
#include <errno.h>
#include <math.h>
#define POSITIVE 25
#define NEGATIVE -25 
//remember to compile with -lm flag
int main(void){     
  double ret;      
  errno = 0;     
  ret = sqrt(NEGATIVE);
  if (errno == EDOM) /*EDOM Signifies Domain Error*/          
     //printf("Domain Error : Invalid Input To Function\n");     
     perror("sqrt");
  else          printf("Valid Input To Function\n");
     errno = 0;     
  ret = sqrt(POSITIVE);      
  if (errno == EDOM)          
     printf("Domain Error : Invalid Input To Function\n");     
  else          
     printf("Valid Input To Function\n");      
  return 0;
}

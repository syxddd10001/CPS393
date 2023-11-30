//Source sample6a.c
//Note: new gcc may require the -lm AFTER the filename, as in:
//gcc sample6a.c -lm
#include <stdio.h>
#include <math.h>
int main(void) {
  int a=2;
  printf(" %lf\n",p(4,a));
  return 0 ;
}
double p(double y, double z) {
        return (pow(y,z)); // pow(x,y) returns x^y
}


#include <stdio.h>
#include <stdlib.h>

double add (double a, double b) { return(a+b); }
double mul (double a, double b) { return(a*b); }

double apply( double (*f)(double, double), double x, double y) {
  (*f)(x,y);
}

int main (void) {

  printf("%.1lf\n",apply(&mul,3.0,apply(&add,1.2,2.1)));

  exit(0);
}


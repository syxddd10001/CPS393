/*Purpose: to compute square of an double*/
/*Input: a double to square              */
/*Output: the square of the input double */
/*sample8.c*/
#include <stdio.h>
double square(double a);    
int main(void) {
  double num,sq;  /*number to square, and its square*/
  printf("Enter number: ");
  scanf("%lf", &num);
  sq = square(num);
  printf("The square of %lf is %lf\n",num,sq);
  return 0;
}
double square(double a) {  
  return (a*a);
}

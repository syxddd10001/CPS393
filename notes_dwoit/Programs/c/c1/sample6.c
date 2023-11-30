#include <stdio.h>
#include <math.h>   
/*sample6.c
  may need: gcc sample6.c -lm
*/
int main(void) {
  double answer;
  answer = sin(0.2);
  printf("%lf is sin of 0.2\n",answer);
  printf("%lf is Pi\n",M_PI);
  return 0;
}

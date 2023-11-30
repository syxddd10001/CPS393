/*Source: testfact.c
  Purpose: driver to test factorial function in math2.c
*/
#include <stdio.h>
#include <stdlib.h>
#include "fact.h"
void test(int TestNumber, long result, long answer );
int main(void) {
  test(1,fact(0),1); /*boundary*/
  test(2,fact(1),1); /*boundary*/
  test(3,fact(2),2); /*boundary*/
  test(4,fact(7),5040); /*interior*/
  test(5,fact(-2),-1); /*error*/
  exit(0);
}
void test(int TestNo, long result, 
          long answer) {
  if (result != answer) printf("Test %d failed\n",TestNo);
}


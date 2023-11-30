/*Purpose: to read in an integer, and print out
  one-third of its value
  Input: an integer 
  Output: one-third of the integer
  Source: sample4.c
*/
#include <stdio.h>
int main(void) {
  int i;  /*the integer*/
  printf("Enter the integer: ");
  scanf("%d", &i);
  /*compute*/
  printf("One-third: %f\n", i/3.0);
  printf("One-third: %d\n", i/3);
  //printf("One-third: %.0f\n", i/3.0); //printf rounds
  return 0 ;
}

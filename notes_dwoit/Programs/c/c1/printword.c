#include <stdio.h>
int main(void) {
  /*set up array of english words for digits*/
  char digits [10][6]= {
        "zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine" };
  char num;   /*digit to read in*/

  printf("Enter a digit: ");
  num = getchar();
  num = num - '0';
  if (num >= 0 && num < 10)
       printf("\n%s\n", digits[num]);
  else printf("\nThat wasn't a digit\n");
  return 0;
}

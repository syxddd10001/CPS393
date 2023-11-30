/*Source:  union1.c
  Purpose: encode/decode a char by flipping
           its third bit
*/
#include <stdio.h>

int main(void) {
  struct BitStr {
         unsigned first2:2; /*name unnecessary*/
         unsigned third:1;  /*bit to flip*/
         unsigned:5;        /*example of no name*/
};
  union code {
        char ch;
        struct BitStr bits;
        } CodeVar;

  char ch;                 /*different than above*/

  printf("Enter char to be encoded: ");
  ch=getchar();     /*in 1 line is OK too*/
  CodeVar.ch=ch;

  /*flip*/
  if (CodeVar.bits.third == 0)
       CodeVar.bits.third++;
  else CodeVar.bits.third--;

  printf("Encoded char is: %c\n", CodeVar.ch);
return 0;
}

#include <stdio.h>
void main(void) {
  int c;
  printf("enter a char: ");
  c=getchar();
  switch(c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("a vowel\n");
      break;
    default:
      printf("non-vowel\n");
  }
}

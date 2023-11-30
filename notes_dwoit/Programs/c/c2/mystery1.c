#include <stdio.h>
#include <string.h>

   int mystery( char *A) {
      int x=0;
      while ( *A++) x++;
      return x;
   }

int main (void) {
  char *str="xyz";
  int x;
  puts(str); 
  x=mystery(str);  
  puts(str); 
  printf("mystery returned %d\n",x);
}

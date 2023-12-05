#include <stdio.h>

int x = 3;
extern int n;
extern int s;

void AddS(void);
void MulN(void);

int main (void) {
  AddS(); // s = 1 + 3 = 4
  MulN();  // n = 3 * 4 = 12
  x=n+1; // x = 12 + 1 = 13
  s=n+x+2;  // s = 4 + 13 + 2 = 19
  AddS(); // s = 12 + 13 = 25
  // x = 13, n = 12, s = 25
  printf("x=%d\n",x); 
  printf("n=%d\n",n); 
  printf("s=%d\n",s); 
  return 0;           
}

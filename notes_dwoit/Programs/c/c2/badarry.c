#include <stdio.h>
int main(void) {
  char a[5], b[5];
  char c[5], d[5];
  int i;
  for (i=0; i<5; i++) {
    a[i]=i;
    c[i]=i;
  }
  b=a;
  for (i=0; i<5; i++) d[i]=c[i];
  for (i=0; i<5; i++) {
    printf("b[%d]=%d  d[%d]=%d\n",i,b[i],i,d[i]);
    }
  b="hello there";  
}

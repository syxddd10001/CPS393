//Source: accum.c
#include <stdio.h>
int fs(int x) {
  static int count=0;
  count=count+x;
  return (count);
}
int fn(int x) {
  int count=0;
  count=count+x;
  return (count);
}
int main(void) {
  int i;
  for (i=0;i<5;i++) printf("%d ",fs(1));
  putchar('\n');
  for (i=0;i<5;i++) printf("%d ",fn(1));
  putchar('\n');
}

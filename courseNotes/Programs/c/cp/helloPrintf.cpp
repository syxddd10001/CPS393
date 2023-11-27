#include <cstdio>    //standard input/output streams (cout etc)
//compile: g++ helloPrintf.cpp

int main() {
  printf("Hello World!\n");
  return 0;
}

/* <cstdio> has same functions as <stdio.h>
   and most everything is in namespace std, so it should actually be
  std::printf("Hello World!\n");
  However, mostly everything in std gets put in global namespace
  too, so just plain printf works
*/

#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {

  printf("%.1lf\n",atof(argv[1])*atof(argv[argc-1]));
}

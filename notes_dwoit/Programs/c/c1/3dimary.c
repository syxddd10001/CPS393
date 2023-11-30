/*Source: 3dimary.c*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
  int A[2][3][2]= {1,2,3,4,5,6,7,8,9,10,11,12};
  int i,j,k;
  for (i=0; i<2; i++)
    for (j=0; j<3; j++)
      for (k=0; k<2; k++)
        printf("A[%d][%d][%d]=%d\n",i,j,k,A[i][j][k]);
  exit(0);
}

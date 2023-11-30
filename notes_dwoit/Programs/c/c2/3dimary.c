/*3dimary.c*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
//A and B contain same values
  int A[2][3][4]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
  int B[2][3][4] = { 
                     { 
                       {1 , 2, 3, 4}, 
                       {5 , 6, 7, 8},
                       {9 ,10,11,12} 
                     },

                     { {13,14,15,16}, 
                       {17,18,19,20},
                       {21,22,23,24} 
                     } 
                   };
  int i,j,k;
  for (i=0; i<2; i++)
    for (j=0; j<3; j++)
      for (k=0; k<4; k++)
        printf("B[%d][%d][%d]=%d\n",i,j,k,B[i][j][k]);
//      printf("A[%d][%d][%d]=%d\n",i,j,k,B[i][j][k]);
  exit(0);
}

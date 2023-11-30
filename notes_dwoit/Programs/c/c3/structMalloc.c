/*Source: structMalloc.c*/
#include <stdio.h>
#include <stdlib.h>
struct complex {
                 int real;
                 int imag;
       };
void ReadComplex(struct complex *c);
void WriteCList(struct complex *p, int num);

int main(void) {
  int i,num;
  struct complex *CList;
  struct complex A;
  printf("How many complex numbers?: ");
  scanf("%d",&num);
  CList=malloc(num*sizeof(struct complex)); //error check it
  for (i=0;i<num;i++) {
    ReadComplex(&A);
    CList[i]=A;
  }
  WriteCList(CList,num);
  return 0;
}
void ReadComplex(struct complex *c) {
  printf("Enter complex: ");
  scanf("%d %d",&((*c).real), &((*c).imag));
}

void WriteCList(struct complex *c, int num) {
//alternate syntax:
//void WriteCList(struct complex c[], int num) {
     int i;
     for (i=(num-1);i>=0;i--)
       printf(" %d + %di\n", c[i].real, c[i].imag);
}

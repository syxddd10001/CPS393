/*
Source: structMalloc.c
Answer to last homework question in c3.txt
*/
#include <stdio.h>
#include <stdlib.h>
struct complex {
                 int real;
                 int imag;
       };
void ReadComplex(struct complex *c, FILE *fp) ;
void WriteCList(struct complex *p, int num);

int main(void) {
  FILE *fp;
  int i,num;
  struct complex *CList;
  struct complex A;
  fp=fopen("complexFile","r"); //error check
  fscanf(fp,"%d",&num);
  CList=malloc(num*sizeof(struct complex));
  for (i=0;i<num;i++) {
    ReadComplex(&A,fp);
    CList[i]=A;
  }
  WriteCList(CList,num);
  return 0;
}
void ReadComplex(struct complex *c, FILE *fp) {
  //printf("Enter complex: ");
  fscanf(fp,"%d %d",&(c->real), &(c->imag));
  //alternate syntax:
  //scanf("%d %d",&(*(c).real), &(*(c).imag));
}

void WriteCList(struct complex *c, int num) {
//alternate syntax:
//void WriteCList(struct complex c[], int num) {
     int i;
     for (i=(num-1);i>=0;i--)
       printf(" %d + %di\n", c[i].real, c[i].imag);
     printf("\n");
}

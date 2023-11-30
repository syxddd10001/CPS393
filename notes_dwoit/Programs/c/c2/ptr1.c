#include <stdio.h>
int main(void) {
  
int A[5] = {1,2,3,4,5};
int *p;
p=A;
printf("%d %d %d ", *p, *(p+1), *(p+2) );
putchar('\n');
printf("%d %d %d ", p[0], p[1], p[2] );
putchar('\n');
printf("%p %p %p ", p, p+1, p+2 );
printf("\nsize of int: %lu\n",sizeof(int));
return(0);
}

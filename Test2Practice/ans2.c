#include <stdio.h>
#include <stdlib.h>
#include "ans2F.h"

int main(void){
	int **A = getPointer(1,2,3,4,5,6);
	int sum = *A[0];	
	printf("%d", *A[0]);
	for (int i =1; i<6; i++){
		printf("+%d", *A[i]);
		sum += *A[i];
	}

	printf("=%d\n",sum);

	return 0;

}

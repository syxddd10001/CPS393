#include "ans2F.h"

int** getPointer(int i1, int i2, int i3, int i4, int i5, int i6){
	int* array[6];
	array[0]=&i1;
	array[1]=&i2;
	array[2]=&i3;
	array[3]=&i4;
	array[4]=&i5;
	array[5]=&i6;
	int ** firstptr = array;
	return firstptr;
}


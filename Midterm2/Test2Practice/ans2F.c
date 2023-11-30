#include "ans2F.h"

int** getPointer(int i1, int i2, int i3, int i4, int i5, int i6){
        int * array[6] = {&i1,&i2,&i3,&i4,&i5,&i6};
        int ** dptr = array;
        return dptr;

}

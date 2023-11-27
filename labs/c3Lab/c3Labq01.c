#include <stdio.h>
#include <stdlib.h>

void readInput(char* c, int *i, double *d);

int main(){
    char c;
    int i;
    double d;
    printf("c=%c i=%d d=%lf\n", c, i, d);
    readInput(&c, &i, &d);
    printf("c=%c i=%d d=%lf\n", c, i, d);
    return 0;
}

void readInput(char* c, int* i, double* d)
{
    printf("Enter a char, an int and a double: ");
    scanf(" %c %d %lf", c, i, d);
}


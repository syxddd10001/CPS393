#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap_string(char** x, char ** y){
    char* temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main (void) {
    char *X=malloc(11);
    char *Y=malloc(11);
    scanf("%s %s",X,Y);
    printf("X:%s, ", X); printf("Y: %s\n", Y);
    swap_string(&X, &Y);
    printf("X:%s, ", X); printf("Y: %s\n", Y);
    return 0;
}

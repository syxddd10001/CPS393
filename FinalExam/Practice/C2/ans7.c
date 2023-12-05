#include <stdio.h>
#include <stdlib.h>

void swap_string(char** str1, char** str2){
    char* temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;

}

int main(int argc, char* argv[]){
    char *X=malloc(11), *Y=malloc(11);
    scanf("%s %s",X,Y);
    printf("X:%s, ", X); printf("Y: %s\n", Y);
    swap_string(&X, &Y);
    printf("X:%s, ", X); printf("Y: %s\n", Y);

    return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* newString(char* a, char* b){
    char* newstr = (char*) malloc(sizeof(a)+sizeof(b));

    strcat(newstr, a);
    strcat(newstr, b);
    return newstr;
}


int main(void){
    char *S = newString("ABcd","efgHI");
    printf("Called newString with ABcd and efgHI\n");
    printf("It returned: %s\n", S);
    printf("with length: %ld\n", strlen(S));
    return 0;
}

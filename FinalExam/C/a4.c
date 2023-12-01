#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* newString(char* str1, char* str2)
{
    int totalLength = strlen(str1) + strlen(str2) + 1;
    char* strRet = malloc(sizeof(totalLength));
    strcat(strRet, str1);
    strcat(strRet, str2);
    return strRet;
    
}

int main (void) {
    char *S = newString("ABcd","efgHI");
    printf("Called newString with ABcd and efgHI\n");
    printf("It returned: %s\n", S);
    printf("with length: %ld\n", strlen(S));
    return 0;
}

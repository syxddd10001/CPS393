#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* newString(char* str1, char* str2, char* str3, char* str4)
{
    int strLength = strlen(str1)+strlen(str2)+strlen(str3)+strlen(str4)+1; // remember the + 1 for \0 
    char* newStr = (char*) malloc(sizeof(strLength));
    strcpy(newStr, str1);
    strcat(newStr, str2);
    strcat(newStr, str3); 
    strcat(newStr, str4);
    return newStr;

}

int main (void) {
    char *S = newString("ABcd","efgHI","jKLMno","PqRstu") ;
    printf("Called newString with ABcd efgHI jKLMno PqRstu\n");
    printf("It returned: %s\n", S);
    printf("with length: %ld\n", strlen(S));
    return 0;
}

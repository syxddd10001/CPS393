#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int countChar(char* fName, char c){
    FILE* file;
    int charCount = 0;
    char m;
    if ((file=fopen(fName,"r")) == NULL) return -1;

    while ((m=fgetc(file)) != EOF){
        if (c == m) charCount++;
    }

    return charCount;
}

int main(int argc, char* argv[]){

    char c = 'X';
    int count;
    
    for (int i = 1; i<argc;i++){
        count = countChar(argv[i], c);
        if (count == -1) printf("Error while reading file(s)");
        
        printf("%s: %d %c characters\n", argv[i], count, c);
    }
    return 0;
}

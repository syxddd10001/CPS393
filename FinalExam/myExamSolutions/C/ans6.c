#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int countChar(char* fname, char c){
    FILE* file = fopen(fname,"r"); 
    int charCount = 0;
    char m;

    while ((m=fgetc(file)) != EOF){
        if (m == c) charCount++;
    }

    fclose(file);
    
    return charCount;
}

int main(int argc, char* argv[]){

    char c = argv[1][0];
    int count;
    
    for (int i = 2; i<argc;i++){
        count = countChar(argv[i], c);
        printf("%s: %d %c characters\n", argv[i], count, c);
    }
    return 0;
}

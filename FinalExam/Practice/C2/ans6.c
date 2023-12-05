#include <stdio.h>
#include <stdlib.h>

int xChars(char* fname){
    FILE* fs = fopen(fname, "r");
    int xc = 0;
    char ch;
    while((ch=fgetc(fs))!= EOF) {
        if (ch == 'X') xc++; 
    }
    fclose(fs);
    return xc;
}

int main(int argc, char* argv[]){
    printf("%s: %d X Characters\n", argv[1], xChars(argv[1])); 
    printf("%s: %d X Characters\n", argv[2], xChars(argv[2]));
    printf("%s: %d X Characters\n", argv[3], xChars(argv[3]));
 
    return 0;
}

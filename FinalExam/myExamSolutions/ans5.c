#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){

    printf("%.1f\n", atof(argv[1]) * atof(argv[argc-1]));
    return 0;
}

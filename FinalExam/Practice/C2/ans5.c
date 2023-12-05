#include <stdio.h>
#include <stdlib.h>



int main(int argc, char* argv[]){
    double a = atol(argv[1]);
    double b = atol(argv[argc-1]);
    double product = a*b;
    printf("%0.1f\n", product);
    return 0;
}

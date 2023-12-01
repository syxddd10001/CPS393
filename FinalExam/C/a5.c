#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
     
    float prod = atof(argv[1])*atof(argv[argc-1]);
    printf("%.1f\n", prod);    
    
    return 0;
}

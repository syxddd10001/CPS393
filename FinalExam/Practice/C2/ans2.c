#include <stdlib.h>
#include <stdio.h>

double add(double a, double b){
    return a+b;
}

double mul(double a, double b){
    return a*b;
}
                // forgot () for *fun
double apply(double (*fun)(double, double), double a, double b){ 
    return (*fun)(a, b); // <- forgot () for *fun
}


int main(){
    printf("%0.1f\n", apply(mul, 3, apply(add, 1.2, 2.1))); 
    return 0;
}

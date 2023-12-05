#include <stdio.h>
#include <stdlib.h>

double add(double a, double b){
    return (a + b);
}

double sub(double a, double b){
    return (a - b);
}

double mul(double a, double b){
    return (a * b);
}

double apply(double (*func)(double, double), double a, double b){
    return (*func)(a, b);
}

int main(){
    printf("%.1f\n", apply(&add, apply(&mul, 6, apply(&sub, 3.1, 3.4)), apply(&mul, 3, apply(&add, 3.2, 1))));
    return 0;
}

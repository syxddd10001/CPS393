#include <stdio.h>
#include <stdlib.h>

double add(double a, double b){
    return (a + b); 
}

double mul(double a, double b){
    return (a * b);
}

double useFunc(double (*ptr)(double,double), double a, double b){
    return (*ptr)(a,b);
}

int main(){
    printf("%.1f\n", useFunc(mul, 3.0, useFunc(add, 1.2, 2.1)));       
	return 0;
}

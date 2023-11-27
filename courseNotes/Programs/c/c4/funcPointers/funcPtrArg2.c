
//source: funcPtrArg2.c
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int (*getFunc(char op))(int,int) {
//or
//typedef int (*FPTR)(int, int);
//FPTR getFunc(int op) {
    if (op == '+') return &add;
    else if (op == '-') return &sub;
    else if (op == '*') return &mul;
    else return NULL;
}

int main(void)
{
    int (*func)(int, int);  //or FPTR func;

    int a = 3;
    int b = 5;
    int r;
    char c;

    c='+';
    func = getFunc(c);
    r = (*func)(a, b);
    printf("%d %c %d = %d\n", a, c, b, r);

    c='*';
    func = getFunc(c);
    r = (*func)(a, b);
    printf("%d %c %d = %d\n", a, c, b, r);
    return 0;
}

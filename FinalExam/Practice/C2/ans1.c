#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void foo(char* args, ...){
    va_list ap;

    va_start(ap, args);

    while (*args){
        if (*args == 'd'){
            printf("int: %d\n", va_arg(ap, int));
        }

        else{
            printf("string: %s\n", va_arg(ap, char*));
        }

        *args++;
    }

}


int main (void) {
    foo("dsds",5,"some string",4,"another string");
}


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void simple_printf(char* args, ...){
    va_list ap;

    va_start(ap, args);

    while(*args){
        if (*args == 's'){
            puts(va_arg(ap, char*));
        }

        else if (*args == 'c'){
            char* cr = itoa(va_arg(ap, int));
            puts(cr);
        }

        else{
        
        }

        args++;
    }
}

int main(){
    simple_printf("sc", "asdasd", 'v');
    return 0;
}

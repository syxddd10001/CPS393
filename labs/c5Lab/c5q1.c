#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void simple_printf(char* args, ...){
    va_list ap;
    char* str;
    va_start(ap, args);
    
    while (*args){
        if (*args == 's'){
            printf("%s\n", va_arg(ap, char*));
        }

        else if(*args == 'c'){
           printf("%c\n", va_arg(ap, int)); 
        }

        else{
            printf("%f\n", va_arg(ap, double));
        }

        args++;
    }

    va_end(ap);

}

int main(){
    simple_printf("scf","ddas", 'c', 13.3);
    return 0;
}

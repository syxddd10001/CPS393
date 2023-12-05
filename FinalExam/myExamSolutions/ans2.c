#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void simple_printf(char* args, ...){

        va_list ap;
        va_start(ap, args);

        while (*args){
                if (*args == 's'){
                    printf("%s is type: string\n", va_arg(ap, char*));
                } 
                else if (*args == 'c'){
                    printf("%c is type: char\n", va_arg(ap, int));
                }
                else{
                    printf("%f is type: double\n", va_arg(ap, double));
                }
                *args++;
        }


        va_end(ap);
}

int main (void) {
        simple_printf("scffs", "this is a STRING", 'a', 4.2, 3.0, "another string");
        return 0;
}

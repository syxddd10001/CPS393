#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void simple_printf(XXXXXX){

        XXXXXXX
        va_start(XXXXXXX);

        while (*args){
                if (*args == 's'){
                    printf("%s is type: string\n", XXXXXX);
                } 
                else if (*args == 'c'){
                    printf("%c is type: char\n", XXXXXXX);
                }
                else{
                    printf("%f is type: double\n", XXXXXX);
                }
                XXXXXX
        }


        XXXXXXX
}

int main (void) {
        simple_printf("scffs", "this is a STRING", 'a', 4.2, 3.0, "another string");
        return 0;
}

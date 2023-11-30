#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void foo(char* args, ...){
	
	va_list ap;
	va_start(ap, args);
		
	while (*args){
		if (*args == 's'){
			printf("string: %s\n", va_arg(ap, char*));
		} else{
			printf("int: %d\n", va_arg(ap, int));
		}
		args++;
	}


	va_end(ap);
}

int main (void) {
  	foo("dsds",5,"some string",4,"another string");
	return 0;
}

#include <stdio.h>
#include <stdarg.h>

void foo(char *fmt, ...) {
    va_list ap;
    int d;
    char *s;

    va_start(ap, fmt);
    while (*fmt)
        switch (*fmt++) {
        case 's':              /* string */
            s = va_arg(ap, char *);
            printf("string: %s\n", s);
            break;
        case 'd':              /* int */
            d = va_arg(ap, int);
            printf("int: %d\n", d);
            break;
        }
    va_end(ap);
}

int main (void) {
  foo("dsds",5,"some string",4,"another string");
}

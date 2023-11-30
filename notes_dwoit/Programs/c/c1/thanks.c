#include <stdio.h>
int main (void) {
 char c;
 for (c=getchar(); c!='X'; c=getchar());
 printf("Thanks for finally inputting an X!!\n");
}

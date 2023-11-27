/*Source:   sample1.c                      */
/*Author:   me                             */
/*Purpose:  to show how printf works       */
/*Input:    None                           */
/*Output:   a line stating the lucky number*/
#include <stdio.h>   //for printf
#include <stdlib.h>  //for exit
#define LUCKY 723    //macro
int main(void) {
    printf("The lucky number is %d\n", LUCKY);
    printf("The %s number is %d\n", "lucky", LUCKY);
    exit(0); /*return(0) same here*/
}

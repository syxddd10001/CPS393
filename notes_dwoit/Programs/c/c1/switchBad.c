#include <stdio.h>
void main(void) {
	int c;
	printf("enter a char: ");
	c=getchar();
	switch(c) {
		//will not compile because 'a' and 97 are same case
		case 'a': printf("a: an %c %d\n",c,c); break;
		case 97: printf("97: an %c %d\n",c,c); break;
		default: printf("default\n");
    }

}

/*source: trycallocString.c */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
int n;          /*num chars of future string incl \0*/
char *p, *tmp;  /*pointers to the future string*/
int i;

scanf("%d",&n);  //length of string incl \0

p = (char *) calloc (n, sizeof(char));
if (p == NULL) {
    fprintf(stderr,"calloc failed\n"); //or perror("calloc");
    exit(0);
}
tmp = p;
/*load string with first n-1 upper-case chars of alphabet
  followed by \0 */
for (i=0; i<(n-1); i++)
    *tmp++ = 'A'+i;
     //tmp[i] = 'A'+i;  //same assignment
tmp='\0';

printf("%s\n",p);  //print the string
//print it again:
for (i=0; i<n; i++)
    printf("p[%d] is %c\n",i,p[i]);

/* prints same
tmp = p;
for (i=0; i<n; i++)
    printf("p[%d] is %c\n",i,*tmp++);
*/
exit(1);
}

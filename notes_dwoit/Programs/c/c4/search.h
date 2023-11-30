
/*Source search.h
  header file for search.c
  The WRAPPER #ifndef is used so that the compiler will not
  see the struct definition twice (in case it is also in another
  header file like add.h
*/

#ifndef NodeTypeSeen
#define NodeTypeSeen
typedef struct node NodeType;

struct node {
	char ch;
	NodeType *next;
   };

#endif

int Srch(NodeType *L, char item) ;

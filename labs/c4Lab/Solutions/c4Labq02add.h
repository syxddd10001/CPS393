/*Source add.h
  header file for add.c
  The #ifndef preprocessor directive is used so that the 
  compiler will not see the struct definition twice (in 
  case it is also in another header file
*/

#ifndef NodeTypeSeen
#define NodeTypeSeen
typedef struct node NodeType;

struct node {
	char ch;
	NodeType *next;
   };

#endif

void Add(NodeType **L, char c);

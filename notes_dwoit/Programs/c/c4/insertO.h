/*Source insertO.h
  header file for insertO.c
*/

typedef struct node NodeType;

struct node {
	char ch;
	NodeType *next;
   };

void InsertO(NodeType **L, char c);

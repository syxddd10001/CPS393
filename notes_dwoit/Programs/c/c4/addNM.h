/*Source addNM.h
  header file for addNM.c
  Answers HMWK question
*/

typedef struct node NodeType;

struct node {
	char ch;
	NodeType *next;
   };

NodeType *Add(NodeType *L, char c);

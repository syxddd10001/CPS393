#ifndef NodeTypeSeen
#define NodeTypeSeen
typedef struct node NodeType;
struct node{
	char ch;
	NodeType *next;
};
#endif
void Add(NodeType **L, char c);


/*Source listADT.h
For user to include in their list programs
User declares a list to be type List
*/

typedef struct node NodeType;
struct node {
        char ch;
        NodeType *next;
   };
struct l {
        int length;
        NodeType *head;
    } ;
typedef struct l List;

void init(List *L) ;
int length(List L) ;
void add(List *L, char c) ;
void print(List L) ;

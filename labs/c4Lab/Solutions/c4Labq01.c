#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CONTACTS 100
#define MAX_NAME 50

typedef struct contact {
   char LastName[MAX_NAME];   
   char FirstName[MAX_NAME];  
   int  Level;
   } contact_t;

int main (int argc, char *argv[]) {

  FILE *fp;
  int num_contacts=0;
  contact_t clist[MAX_CONTACTS];
  int i;

  if (argc != 2) {
     fprintf(stderr, "%s: expect file as argument\n",argv[0]);
     exit (1);
  }
  if ( ((fp = fopen(argv[1],"r")) == NULL) ) {
     fprintf(stderr,"%s: error opening file %s\n",argv[0],argv[1]);
     exit(2);
  }

  fscanf(fp,"%d\n",&num_contacts);


  for (i=0;i<num_contacts;i++) {
    fscanf(fp,"%[^,]%*c%[^,]%*c%d\n",clist[i].LastName, clist[i].FirstName, &clist[i].Level);
  } 

  for (i=num_contacts-1;i>=0;i--)  {
    printf("Contact %d:\n",i);
    printf("  Last Name: %s\n",clist[i].LastName);
    printf(" First Name: %s\n",clist[i].FirstName);
    printf("      Level: %2d ",clist[i].Level);
    if ( clist[i].Level >=0 && clist[i].Level <10 ) printf("(Family)");
    else if ( clist[i].Level >=10 && clist[i].Level <20 ) printf("(Friend)");
    else if ( clist[i].Level >=20 && clist[i].Level <30 ) printf("(WorkPerson)");
    printf("\n");
  }

return 0;
}

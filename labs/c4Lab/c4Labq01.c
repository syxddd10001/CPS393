#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 50
#define MAX_CONTACTS 1000000
typedef struct contact{
	char LastName[MAX_NAME];
	char FirstName[MAX_NAME];
	int Level;

} contact_t;

void readContacts(char* fname){
	FILE* cfile = fopen(fname, "r");
	int num_contacts;
	char st[MAX_NAME];
	fgets(st,sizeof(st),cfile);
	num_contacts = atoi(st);
	contact_t clist [num_contacts];
       	 
	for (int i=0; i<num_contacts; i++) {
		fscanf(cfile,"%[^,]%*c%[^,]%*c%d\n", clist[i].LastName, clist[i].FirstName, &clist[i].Level);
    	
	}

	for (int i = num_contacts-1; i>=0; i--){
		char* rtype;
		if (clist[i].Level < 10 ) rtype = "Family";
		else if (clist[i].Level < 20) rtype = "Friend";
		else if (clist[i].Level < 30) rtype = "WorkPerson";
		printf("Contact %d\n Last Name: %s\nFirst Name: %s\n     Level: %d (%s)\n", i, clist[i].LastName, clist[i].FirstName, clist[i].Level, rtype);
			
	}	

	fclose(cfile);
			
}


int main(int argc, char* argv[]){

	readContacts(argv[1]);	

	return 0;
}

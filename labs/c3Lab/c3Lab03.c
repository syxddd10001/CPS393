#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int n = atoi(argv[1]);
	char* S = argv[2];
	
	char* newString = (char*)calloc(n*(1+strlen(S)), sizeof(char));
	
	for (int i = 0; i < n; i++){
		strcat(newString, S);
	}


	printf("newStrong=%s\n",newString);
	
	free(newString);
	return 0;	
	
}

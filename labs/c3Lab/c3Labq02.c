#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

char* NTodelim(char* str, char d);

int main(int argc, char *argv[]){
	
	char* delimiter = argv[1];
	FILE* file1 = fopen(argv[2],"r");
	FILE* file2 = fopen(argv[3], "r");

	size_t sz = 10;

	char* str1 = malloc(sizeof(char)*sz);
	char* str2 = malloc(sizeof(char)*sz);
	
	
	while (true){
		ssize_t line1 = getline(&str1, &sz, file1);
		ssize_t line2 = getline(&str2, &sz, file2);
		
				
		if (line1 == -1 && line2 == -1) break;

		if (line1 != -1 && line2 != -1) 
		{
			printf("%s%s", NTodelim(str1, *delimiter),str2);
		}
		
		if (line1 == -1 && line2 != -1) printf("%c%s", *delimiter, str2);

		if (line1 != -1 && line2 == -1) printf("%s", NTodelim(str1, *delimiter));




	}
	

	


	free(str1);	
	free(str2);
	fclose(file1);
	fclose(file2);

	
	
	return 0;
}

char* NTodelim(char* str, char d){
	char *p;
	if ((p=strchr(str,'\n'))!=NULL){
		*p = d;
	}
	return str;
}


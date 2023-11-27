#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#define true 1
#define false 0

char* NTodelim(char* str, char d);

int main(int argc, char *argv[]){
	  
	char* errorMsg = (char*)malloc(100); // "Usage: ./c3Labq04 character file1 file2";
	if (argc != 4){
		sprintf(errorMsg, "Usage: ./%s character file1 file2\n", argv[0]);
		fputs(errorMsg, stderr);
		free(errorMsg);
		exit(1);
	}
	
	char delimiter = argv[1][0];
	FILE* file1;
	FILE* file2;

	size_t sz = 10;

	char* str1 = (char *)malloc(sizeof(char)*sz);
	char* str2 = (char *)malloc(sizeof(char)*sz);
	
	
	if ((file1 = fopen(argv[2],"r")) == NULL){	
		sprintf(errorMsg, "./%s: file %s not readable", argv[0], argv[2]);
		fputs(errorMsg, stderr);
		free(errorMsg);
		exit(1);
	}

	else if ((file2 = fopen(argv[3],"r")) == NULL){	
		sprintf(errorMsg, "./%s: file %s not readable", argv[0], argv[3]);
		fputs(errorMsg, stderr);
		free(errorMsg);
		exit(1);
	}
	free(errorMsg);
	
	while (true){
		ssize_t line1 = getline(&str1, &sz, file1);
		ssize_t line2 = getline(&str2, &sz, file2);
		
	
		if (line1 == -1 && line2 == -1) break;

		if (line1 != -1 && line2 != -1) 
		{
			printf("%s%s", NTodelim(str1, delimiter),str2);
		}
		
		if (line1 == -1 && line2 != -1) printf("%c%s", delimiter, str2);

		if (line1 != -1 && line2 == -1) printf("%s", NTodelim(str1, delimiter));
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


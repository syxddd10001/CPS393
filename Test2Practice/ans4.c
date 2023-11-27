include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fileSize(char* fname, int* longestLine, int* numLines);

int main(int argc, char* argv[]){
	int longestLine, numLines;
	char* fname = argv[1];

	fileSize(fname, &longestLine, &numLines);
		
	FILE* file = fopen(fname, "r");
	char strLines[numLines][longestLine+1]; //+1 for \0
	int i = 0;	
	while (fgets(strLines[i], longestLine+1, file) != NULL) i++;

	for (int i = numLines-1; i>=0; i--){
		printf("%s", strLines[i]);	
	}
	fclose(file);
	return 0;

}

void fileSize(char* fname, int* longestLine, int* numLines){
	*longestLine = 0;
	*numLines = 0;
	int currLen = 0;
	
	char* strline;
	size_t s = 25;
	ssize_t line;
	FILE* file;
	
	if((file=fopen(fname,"r"))==NULL){
		fputs("Error occured while opening file", stderr);
		exit(0);
	}

	while ( (line = getline(&strline, &s, file)) != -1){
		currLen = strlen(strline);
		if (currLen > *longestLine) *longestLine = currLen;
		*numLines+=1;
	}

	fclose(file);
}

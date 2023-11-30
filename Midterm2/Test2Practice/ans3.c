#include <stdio.h>
int mystrcmp(char* S1, char* S2){

	while (*S1 && *S2){
		int diff = *S1-*S2;
		if (diff != 0) return diff;
		S1++;
		S2++;
	}

	if (*S1) return 1;
	else if (*S2) return -1;
	else return 0;
}

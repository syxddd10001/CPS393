#include <stdio.h>

int main(){
	float tempf;
	scanf("%f", &tempf);
	float tempc = (tempf-32)/1.8;
	printf("%.1fF = %.1fC\n", tempf,tempc);

	return 0;
}

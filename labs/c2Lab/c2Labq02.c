#include <stdio.h>
#include <readline/readline.h>
//Link with readline library: gcc c2Labq02.c -lreadline

int main(void) {
   char *S = readline("    Enter a string: ");
   printf(" Entered string is: %s\n",S);
   for (int i = 0,j=strlen(S)-1; i<j; i++,j--){
 	char temp = S[i];
	S[i] = S[j];
	S[j]=temp;
   }   
   printf("Reversed string is: %s\n",S);
   return 0;
}

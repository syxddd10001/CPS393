#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * newlineToDelim(char *S, char D) ;
void exitBadFile(char *progName, char *F);

int main (int argc, char *argv[]) {
  FILE *F1, *F2;               //input files
  char D;                      //input delimiter
  char *F1line="", *F2line=""; //line read from file
  size_t n1=0,n2=0;            //length of read-in lines
  ssize_t nreadF1, nreadF2;    //getline return values

  //check for 3 CLAs
  if ( argc != 4 ) {
    fprintf(stderr, "Usage: %s delimiter File1 File2\n",argv[0]);
    exit(1);
  }

  D =argv[1][0];               //set delimiter from CLA

  //exit if a file is not readable
  if ( (F1=fopen(argv[2],"r"))==NULL) exitBadFile(argv[0],argv[2]);
  if ( (F2=fopen(argv[3],"r"))==NULL) exitBadFile(argv[0],argv[3]);
  
  nreadF1 = getline(&F1line,&n1,F1);  //read line1 of F1
  nreadF2 = getline(&F2line,&n2,F2);  //read line1 of F2

  //read not end-of-file for one (or both) files
  while ( (nreadF1!=-1) && (nreadF2!=-1)) {
    //print line from F1 (if any) with newline changed to D
    if (nreadF1!=-1) printf("%s",newlineToDelim(F1line,D));
    //print line from F2 (if any)
    if (nreadF2!=-1) printf("%s",F2line);
    //read in the next line from each file
    nreadF1 = getline(&F1line,&n1,F1);
    nreadF2 = getline(&F2line,&n2,F2);
   }

  //if F1 ended, but not F2, output remainder of F2 
  if ((nreadF1==-1) && (nreadF2!=-1)) {
    printf("%c%s",D,F2line);
    while  ((nreadF2 = getline(&F2line,&n2,F2)) != -1) 
      printf("%c%s",D,F2line);
  }
  else 
  //if F2 ended, but not F1, output remainder of F1 
  if ((nreadF2==-1) && (nreadF1!=-1)) {
    printf("%s\n",newlineToDelim(F1line,D));
    while  ((nreadF1 = getline(&F1line,&n1,F1)) != -1) 
      printf("%s\n",newlineToDelim(F1line,D));
  }
  exit(0);    
}

//changes string's trailing newline to the delimiter character
char * newlineToDelim(char *S, char D) {
  char *p;
  if ((p=strchr(S, '\n')) != NULL) {//if there is a newline
      *p = D;
  }
  return S;
}

void exitBadFile(char *progName, char *F){
  fprintf(stderr, "%s: %s is unreadable file\n", progName,F);
  exit(1);
}

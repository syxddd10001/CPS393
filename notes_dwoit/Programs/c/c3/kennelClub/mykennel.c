#include <stdio.h>
#include <stdlib.h>
#include "KClub.h"
#define MAXLINE 100

int main (void) {

   struct dog {
     char name[MAX_NAME];
     int dog_breed;      //index from breed_name
     int color;          //index into color
     double tail_length;  //in inches
   };

  int num_dogs;
  int i;
  char instring[MAXLINE];

  struct dog *dogArray;

  //read in the number of dogs (from stdin)
  gets(instring);            
  num_dogs=atoi(instring);

  //allocate memory for the dogArray
  dogArray = (struct dog *) malloc(num_dogs*sizeof(struct dog));

  //load the dogArray with all dogs (from stdin)
  for (i=0;i<num_dogs;i++) {
    gets( dogArray[i].name);
    gets (instring);
    dogArray[i].dog_breed=atoi(instring);
    gets (instring);
    dogArray[i].color=atoi(instring);
    gets (instring);
    dogArray[i].tail_length=atof(instring);
  }

  //print all the dogs in the dogArray with nice breed and color names
  for (i=0;i<num_dogs;i++) {
    printf("Dog %d:\n",i);
    printf("       Name: %s\n",dogArray[i].name);
    printf("      Breed: %d %s\n",dogArray[i].dog_breed, breed_name[dogArray[i].dog_breed]);
    printf("      Color: %d %s\n",dogArray[i].color, color[dogArray[i].color]);
    printf("      T.Len: %.1lf inches\n",dogArray[i].tail_length);
  }

}

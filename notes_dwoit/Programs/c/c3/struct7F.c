/*Source:  struct7F.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  typedef struct {
      unsigned day;
      unsigned month;
      unsigned year;
  } date;
  typedef struct {
      char make[40];
      char model[40];
       int year;
      float price;
      date dateBought;
  } car;

car readCar(FILE *fp) ;
void printcar(car x) ;

int main(int argc, char *argv[]) {
  FILE *carFile;
  int i,n;
  carFile=fopen("carFile","r"); //needs error check 
  fscanf(carFile,"%d",&n);      //needs error check
  car mycars[n];                //variable length array

  for (i=0;i<n;i++) 
    mycars[i]=readCar(carFile);
  for (i=0;i<n;i++) 
    printcar(mycars[i]);
  return 0;
}

car readCar(FILE *fp) {        //needs input format checks
  car temp;
  fscanf(fp,"%s\n",temp.make);
  fscanf(fp,"%s\n",temp.model);
  fscanf(fp,"%d\n",&(temp.year));
  fscanf(fp,"%f\n",&(temp.price));
  fscanf(fp,"%d ",&(temp.dateBought.day));
  fscanf(fp,"%d ",&(temp.dateBought.month));
  fscanf(fp,"%d\n",&(temp.dateBought.year));
  return temp;
}

void printcar(car x) {
  printf("car:\n");
  printf("Make:  %s\n",x.make); 
  printf("Model: %s\n",x.model); 
  printf("Year:  %d\n",x.year);
  printf("Price: $%.0f\n",x.price);
  printf("Bought: %d/%d/%d\n",x.dateBought.day,x.dateBought.month,x.dateBought.year);
  return ;
}

/*Source:  struct7.c */
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

car addcar(char *make, char *model, int year, float price, 
           int day, int month, int yearBought) ;
void printcar(car x) ;

int main(void) {
  car X;
  car mycars[3];
  int i;
          X=addcar("Ferrari","California T", 2015, 198190.00, 1, 1, 2015);
  mycars[0]=addcar("Ferrari","California T", 2015, 198190.00, 1, 1, 2015);
  mycars[1]=addcar("Porche","Carrera", 2006, 440000.00, 25, 12, 2017);
  mycars[2]=addcar("Ford","Focus", 2004, 3600.00, 20, 11, 2022);

  for (i=0;i<3;i++) 
    printcar(mycars[i]);
  printcar(X);
  return 0;
}

car addcar(char *make, char *model, int year, float price, int day, int month, int yearBought) {
    car temp;
    strcpy(temp.make, make);
    strcpy(temp.model, model);
    temp.year=year;
    temp.price=price;
    temp.dateBought.day=day;
    temp.dateBought.month=month;
    temp.dateBought.year=yearBought;
    return temp;
}
  
void printcar(car x) {
  printf("car:\n");
  printf("Make:  %s\n",x.make); 
  printf("Model: %s\n",x.model); 
  printf("Year:  %d\n",x.year);
  printf("Price: $%.0f\n",x.price);
  printf("Bought: %d/%d/%d\n",x.dateBought.day,
                  x.dateBought.month,x.dateBought.year);
  return ;
}

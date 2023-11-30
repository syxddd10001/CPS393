/*Source:  struct1.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char c;

  struct car {
               char make[40];
               char model[40];
               unsigned int year;
               float price;
         }; 

struct car chan, woit;

strcpy(woit.make, "Ferrari");
strcpy(woit.model, "California T");
woit.year = 2015;
woit.price = 198190.00;

printf("woit car:\n");
printf("%s ",woit.make); 
printf("%s ",woit.model); 
printf("%u ",woit.year);
printf("$%.0f\n",woit.price);

printf("%c\n",woit.make[4]);

printf("enter make: ");
scanf("%s", chan.make);  //Porsche 
 while ((c=getchar())!='\n');
printf("enter model: ");
gets(chan.model);        //Carrera 
printf("enter year price: ");
scanf("%u %f", &chan.year, &chan.price); //2012 440000

printf("chan car:\n");
printf("%s ",chan.make); 
printf("%s ",chan.model); 
printf("%u ",chan.year);
printf("$%.0f\n",chan.price);


return 0;
}

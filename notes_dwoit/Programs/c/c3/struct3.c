/*Source:  struct3.c */
#include <stdio.h>
#include <string.h>
int main(void) {
  typedef struct {
               char make[40];
               char model[40];
               unsigned int year;
               float price;
         } car;
car  chan[4];


strcpy(chan[0].make, "Ford");
strcpy(chan[0].model, "Fusion");
chan[0].year=2010;
chan[0].price=22000.99;

printf("%s\n",chan[0].make); 
printf("%s\n",chan[0].model); 
printf("%u\n",chan[0].year);
printf("$%.2f\n",chan[0].price);
printf("size of type unsigned int is %lu \n",sizeof(unsigned int));
printf("size of type float is %lu \n",sizeof(float));
printf("size of type car is %lu \n",sizeof(car));
return 0;
}

#include <stdio.h>
//reads one Fahrenheit temperature and prints it in Celsius
int main (void) {
  float tempF;
  scanf("%f", &tempF);
  printf("%.1fF = %.1fC\n",tempF,((tempF-32) / 1.8));
}

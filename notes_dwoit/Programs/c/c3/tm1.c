/*Source: tm1.c
  Purpose: to display current system time and date
*/
#include <stdio.h>
#include <time.h>

int main(void) {
  struct tm *systime;
  time_t t;

  t = time(NULL); 
  systime = localtime(&t);
  printf("Time is %d:%d:%d\n",
          systime->tm_hour, systime->tm_min, systime->tm_sec);
  printf("Date is %d/%d/%d\n",
	  systime->tm_mday,
          systime->tm_mon+1, 
          systime->tm_year+1900); //since it is year - 1900
  return 0;
}

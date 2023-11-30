#include <stdio.h>
#include <string.h>

struct evaluation {
  int tests;   /*number of tests*/
  int exam;    /*non-0=yes, 0=no*/
  int assigns; /*number of*/
  int labs;    /*number of*/
  };

struct course {
  char CourseNum[10];  /*e.g., CPS590 */
  char CourseName[80]; /*e.g., Intro to Operating Systems */
  struct evaluation eval; /*eval info*/
  } c1, c2[10];

int main (void) {
  strcpy(c1.CourseNum,"CPS590");
  c1.eval.assigns = 3;
  c2[0].eval.labs=6;

  struct evaluation x;
  printf("sizeof x is: %lu\n",sizeof(x));
  printf("sizeof c1 is: %lu\n",sizeof(c1));
  printf("sizeof struct evaluation is: %lu\n",sizeof(struct evaluation));
  printf("for the [10] it uses 12 because it grabs memory in multiples of 4\n");
return 0;
}

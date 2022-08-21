#include <stdio.h>


/* to avoid the use of "magical numbers" the "#define" construct can be used
to define a symbolic name or symbolic constant to a particular data type. */

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit of table */
#define STEP 20 /* step size*/
 
/* Fahrenheit-Celsius table */
main() {
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%4d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }
}
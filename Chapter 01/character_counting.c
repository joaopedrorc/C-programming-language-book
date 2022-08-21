#include <stdio.h>

// main() {
//   long nc;

//   nc = 0;
//   while(getchar() != EOF) {
//     ++nc;
//     printf("var %ld\n", nc);
//   }
// }

/* For the code to work with bigger numbers we can use a double (double length float),
 and use a for statement insted of while */

main() {
  double nc;

  for(nc = 0; getchar() != EOF; ++nc){
      ;
    printf("%.0f\n", nc);
  }
}
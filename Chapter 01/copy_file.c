/* Character input and output */

/* getchar() fetches the next input character each time it is called, 
and returns that character as its value */

/* c = getchar() */

/* The function putchar() complements the getchar():
  
  putchar(c);

  points the contents of variable c on some output medium, usually the terminal.
 */

 /* Modern C compilers defines EOF (End of File) in the stdio.h file and the EOF value is iqual to -1 */

#include <stdio.h>

/* copy input to output 1st version */
/* main() {
  int c;
  c = getchar();

  while( c != EOF) {
    putchar(c);
    c = getchar();
  }
 } */

/* copy input to output 2nd version */
main() {
  int c;

  while((c = getchar()) != EOF) {
    putchar(c);
  }
}
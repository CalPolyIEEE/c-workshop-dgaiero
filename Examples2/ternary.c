#include <stdio.h>
#include <stdlib.h>
#define MAX_BUF_LEN (10)

int main(void) {
   int index, n=50;

   /* assign using ternary statement */
   index = (n > MAX_BUF_LEN) ? MAX_BUF_LEN : n;
   printf("n %s out of bounds\n",
       (n > MAX_BUF_LEN) ? "is" : "is not");

   /* do the same with if-else block */
   if (n > MAX_BUF_LEN) {
      index = MAX_BUF_LEN;
      printf("n is out of bounds\n");
   }
   else {
      index = n;
      printf("n is not out of bounds\n");
   }

   return EXIT_SUCCESS;
}

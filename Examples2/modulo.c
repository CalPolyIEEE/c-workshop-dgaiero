#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN (10)

int main(void) {
  int remainder;
  int i, index;
  int a[ARRAY_LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int big_num = 157840318, hun_digit;

  /* Basic functionality */
  remainder = 18 % 5;
  printf("remainder = %d\n", remainder);

  /* Wrap arround indexing */
  for (i = 0; i < 20; i++) {
    index = (i) % ARRAY_LEN;
    printf("i = %d   a[index] = %d\n", i, a[index]);
   }

   /* Decimal digit isolation */
   hun_digit = big_num % 1000;
   hun_digit = hun_digit / 100;
   printf("The hundreds digit = %d\n", hun_digit);

   return EXIT_SUCCESS;
}

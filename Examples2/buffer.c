/* main.c */

#include <stdio.h>
#include <stdlib.h>
#include "fir3tap.h"

#define NSAMPLES    (7)

int main(void)
{
    int x[NSAMPLES] = {1, 2, 4, 5, 6, 8, 9};
    int i;
    float y;
    
    for (i = 0; i < NSAMPLES; i++)
    {
        y = movingAvg(x[i]);
        //printf("input = %d output = %.02f\n", x[i], y);
    }

    return EXIT_SUCCESS;
}

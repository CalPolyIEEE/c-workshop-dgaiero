/* fir3tap.c */

#include <stdio.h>
#include "fir3tap.h"

#define BUFLEN  (NTAPS)

float movingAvg(int val)
{
    /* y[n] = 1/N * (x[n] + x[n-1] + x[n-2]) */
    static int buf[BUFLEN];
    static int idx = (BUFLEN-1), y;
    
    idx = (idx+1) % BUFLEN;
    printf("y1 = %d ", y);
    y -= buf[idx];      /* remove stale sample      */
    printf("y2 = %d ", y);
    buf[idx] = val;     /* replace sample in buffer */
    y += buf[idx];      /* add new sample           */
    printf("y3 = %d\n", y);
    
    /*printf("buf = [%2d, %d, %d] idx=%d | ",
        buf[0], buf[1], buf[2], idx);*/

    return ((float) y) / BUFLEN;
}

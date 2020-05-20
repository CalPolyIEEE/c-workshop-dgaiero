/* fir3tap.c */

#include <stdio.h>
#include "fir3tap.h"

#define BUFLEN  (NTAPS)

float movingAvg(int val)
{
  /*
   * This function implements the following difference equation:
   *    y(n) = 1/3 * ( x(n) + x(n-1) + x(n-2) )
   * where y(n) is the current output, x(n) is the current input,
   * and x(n-1) and x(n-2) are the previous inputs.
   */
  static int buf[BUFLEN];
  static int idx = (BUFLEN - 1), y;

  idx = (idx + 1) % BUFLEN;
  y -= buf[idx];  /* remove stale sample      */
  buf[idx] = val; /* replace sample in buffer */
  y += buf[idx];  /* add new sample           */

  printf("buf = [%2d, %d, %d] idx=%d | ", buf[0], buf[1], buf[2], idx);

  return ((float)y) / BUFLEN;
}

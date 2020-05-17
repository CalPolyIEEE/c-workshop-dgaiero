/* main.c */

#include “trafficLight.h”

void main(void) {
   TrafficLightState light_state = N_TRAFFIC_LIGHT_STATES;
   while(1) {
      light_state = updateLightState();
      switch(light_state) {
         case (ST_RED):
            /* wait */
            break;
         case (ST_YELLOW):
            /* slow down */
            break;
         case (ST_GREEN):
            /* go */
            break;
         default:
            /* failsafe case */
            break;
      }
   }
}

/* trafficLight.h */

typedef enum trafficLightState {
    ST_RED,
    ST_YELLOW,
    ST_GREEN,
    N_TRAFFIC_LIGHT_STATES
} TrafficLightState;

TrafficLightState updateLightState(void);

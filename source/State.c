#include "State.h"
#include "driver/elevio.h"

typedef struct State
{
    int lastFloor;

} State;

static State s = {-1};



void updateLastFloor()
{
    int floor = elevio_floorSensor();
    s.lastFloor = floor == -1 ? s.lastFloor : floor;
}


int getLastFloor()
{
    return s.lastFloor;
}
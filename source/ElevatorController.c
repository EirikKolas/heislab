#include "ElevatorController.h"
#include "State.h"
//Vil fjerne denne
#include "driver/elevio.h"

void initialize()
{

    //Temp til Styringsmodul er lagd
    updateLastFloor();
    while (getLastFloor() == -1)
    {
        elevio_motorDirection(DIRN_DOWN);
        updateLastFloor();
    }
    elevio_motorDirection(DIRN_STOP);
}

#include <iostream>

#include "EventControl.h"
#include "ESports.h"

int main()
{
    EventControl eventControl;

    ESports esports(&eventControl, 0, " ESports Arena", 500);
    ESports esports1(&eventControl, 0, " ESports Arena 2", 500);
    ESports esports2(&eventControl, 0, " ESports Arena 3", 500);

    eventControl.notify(OPEN, "The event is open.");
    eventControl.notify(CLOSE, "The event is closed.");

    return 0;
}
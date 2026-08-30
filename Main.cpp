
#include <iostream>

#include "EventControl.h"
#include "ESports.h"
#include "ProductBooth.h"
#include "FoodCourt.h"

int main(){
    EventControl eventControl;

    FoodCourt foodCourtLarge(&eventControl, false, false);
    FoodCourt foodCourtSmall(&eventControl, false, false);

    ESports esports(&eventControl, 0, " ESports Arena", 500);
    ESports esports1(&eventControl, 0, " ESports Arena 2", 500);
    ESports esports2(&eventControl, 0, " ESports Arena 3", 500);

    ProductBooth BoothSausages(&eventControl,"Sausage Booth", 1, "Sausages", 20.50);
    ProductBooth BoothBurgers(&eventControl,"Burger Booth", 2, "Burgers", 40.50);

    //build tree

    foodCourtSmall.addChild(&BoothSausages);
    foodCourtSmall.addChild(&BoothBurgers);

    foodCourtLarge.addChild(&foodCourtSmall);

    //add to Observer
    eventControl.attach(&foodCourtLarge);

    //notices
    eventControl.notify(OPEN,"The event is open.");
    eventControl.notify(CLOSE,"The event is closed.");

    //remove group from observerList
    eventControl.detach(&foodCourtLarge);

    eventControl.notify(OPEN,"The event is open.");
    eventControl.notify(EVACUATE,"The event is evacuating.");

    return 0;
} 
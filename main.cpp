
#include <iostream>

#include "EventControl.h"
#include "ESports.h"
#include "ProductBooth.h"
#include "FoodCourt.h"
#include "StageZone.h"
#include "IndieGaming.h"

int main(){
    EventControl eventControl;

    FoodCourt foodCourtLarge(&eventControl,"Large food court");
    FoodCourt foodCourtSmall(&eventControl,"Small food court");

    IndieGaming IndieGamesStage(&eventControl,1,50);

    ESports esports(&eventControl, 0, " ESports Arena", 500);
    ESports esports1(&eventControl, 0, " ESports Arena 2", 500);
    ESports esports2(&eventControl, 0, " ESports Arena 3", 500);

    ProductBooth BoothSausages(&eventControl,"Sausage Booth", 1, "Sausages", 20.50);
    ProductBooth BoothBurgers(&eventControl,"Burger Booth", 2, "Burgers", 40.50);

    StageZone BigStage(&eventControl);

    //build tree
    cout<< "New Area 1 - \n\n";

    foodCourtSmall.addChild(&BoothSausages);
    foodCourtSmall.addChild(&BoothBurgers);
  

    cout<< "New Area 2 - \n\n";

    BigStage.addChild(&esports);
    BigStage.addChild(&esports1);
    BigStage.addChild(&esports2);
    BigStage.addChild(&IndieGamesStage);

    
    foodCourtLarge.addChild(&foodCourtSmall);
    foodCourtLarge.addChild(&BigStage);

    //add to Observer
    cout<< "Combining Areas - \n\n";

    eventControl.attach(&foodCourtLarge);

    //notices
    eventControl.notify(OPEN,"The event is open.");
    cout << "------------\n";
    eventControl.notify(CLOSE,"The event is closed.");
    cout << "------------\n";
    eventControl.notify(MAX_CAPACITY,"The event is at max.");

    //remove group from observerList
    cout << "- ----------Removing Large Food Court -------------\n";
    eventControl.detach(&foodCourtLarge);

    eventControl.notify(OPEN,"The event is open.");
    eventControl.notify(EVACUATE,"The event is evacuating.");

    //eventControl.detach(&foodCourtLarge);
    return 0;
} 
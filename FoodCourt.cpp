#include "FoodCourt.h"

FoodCourt::FoodCourt(EventControl* subject, bool open, bool clean) {

}

void FoodCourt::update(Notice notif){
	
    for (vector<EventComponent*>::iterator i = children.begin();i != children.end();++i){
        (*i)->update(notif);
    }
}
FoodCourt::~FoodCourt(){

}
string FoodCourt::getRestaurantDisplay() {
	return this->restaurantDisplay;
}

void FoodCourt::setRestaurantDisplay(string restaurantDisplay) {
	this->restaurantDisplay = restaurantDisplay;
}

void FoodCourt::Sale() {
	for (vector<EventComponent*>::iterator i = children.begin();i != children.end();++i){
		
	}
}

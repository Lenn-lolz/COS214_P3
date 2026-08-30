#include "FoodCourt.h"

FoodCourt::FoodCourt(EventControl* subject, bool open, bool clean) {

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

}

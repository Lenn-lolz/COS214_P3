#include "FoodCourt.h"

FoodCourt::FoodCourt(EventControl *subject) : EventGroup(subject)
{
	this->clean = true;
	this->restaurantDisplay = " ";
	this->displayRestaurants = false;
	subject->attach(this);
}

string FoodCourt::getRestaurantDisplay()
{
	return this->restaurantDisplay;
}

void FoodCourt::setRestaurantDisplay(string restaurantDisplay)
{
	this->restaurantDisplay = restaurantDisplay;
}

void FoodCourt::Sale()
{
	// TODO - implement FoodCourt::Sale
	throw "Not yet implemented";
}

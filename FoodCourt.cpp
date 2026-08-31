#include "FoodCourt.h"

FoodCourt::FoodCourt(EventControl *subject, string name) : EventGroup(subject, name)
{
	this->clean = true;
	this->restaurantDisplay = " ";
	this->displayRestaurants = false;
}

FoodCourt::~FoodCourt() {}

void FoodCourt::update(Notice notification)
{
	switch (notification)
	{ // implementation based on notification?
	case OPEN:
		open = true;
		break;
	case CLOSE:
		open = false;
		break;
	case EVACUATE:
		open = false;
		break;
	case STAGE_EVENT:
		break;
	case MAX_CAPACITY:
		break;
	}
	EventGroup::update(notification);
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

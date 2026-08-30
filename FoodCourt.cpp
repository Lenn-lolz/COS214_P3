#include "FoodCourt.h"

FoodCourt::FoodCourt(EventControl *subject) : EventGroup(subject)
{
	this->clean = true;
	this->restaurantDisplay = " ";
	this->displayRestaurants = false;
	subject->attach(this);
}

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
		break;
	case STAGE_EVENT:
		break;
	case MAX_CAPACITY:
		open = false;
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

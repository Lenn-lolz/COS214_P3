#include "FoodCourt.h"

FoodCourt::FoodCourt(EventControl *subject,string name) : EventGroup(subject)
{
	this->clean = true;
	this->name = name;
	this->restaurantDisplay = " ";
	this->displayRestaurants = false;

}
FoodCourt::~FoodCourt(){}

void FoodCourt::update(Notice notification)
{
	switch (notification)
	{ // implementation based on notification?
	case OPEN:
		cout<<"Opening "  << this->getName() << "\n";
		open = true;
		break;
	case CLOSE:
		open = false;
		break;
	case EVACUATE:
		break;
	case STAGE_EVENT:
		break;
	case CLEAN_REQUIRED:
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

}
#ifndef FOODCOURT_H
#define FOODCOURT_H

#include "EventGroup.h"

class FoodCourt : public EventGroup
{

private:
	EventControl *subject;
	bool open;
	bool clean;
	bool displayRestaurants;
	string restaurantDisplay;

public:
	FoodCourt(EventControl *subject, bool open, bool clean);
	~FoodCourt();
	string getRestaurantDisplay();
	void setRestaurantDisplay(string restaurantDisplay);
	void Sale();
	void update(Notice notif);
};

#endif
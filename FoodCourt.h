/**
 * @brief Abstract composite that inherits from component
 * 
 * Interface for concrete composites and contains children that are concrete leaves or concrete composites
 */

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
	FoodCourt(EventControl *subject,string name);
	~FoodCourt();
	string getRestaurantDisplay();
	void setRestaurantDisplay(string restaurantDisplay);
	void Sale();
	void update(Notice notification);
};

#endif
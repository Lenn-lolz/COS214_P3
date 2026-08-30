#ifndef FOODCOURT_H
#define FOODCOURT_H

class FoodCourt : public EventGroup {

private:
	EventClass* subject;
	boolean open;
	boolean clean;
	boolean displayRestaurants;
	string restaurantDisplay;

public:
	FoodCourt(EventClass* subject, boolean open, boolean clean);

	void ~FoodCourt();

	string getRestaurantDisplay();

	void setRestaurantDisplay(string restaurantDisplay);

	void Sale();
};

#endif

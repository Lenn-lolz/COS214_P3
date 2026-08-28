#ifndef FOODCOURT_H
#define FOODCOURT_H

#include "EventGroup.h"
#include "EventComponent.h"

#include <vector>
#include <iostream>

using namespace std;

class FoodCourt : public EventGroup {

public:
	FoodCourt();
	~FoodCourt();
	void update();
	void open();
	void close();
	void reportStatus();
	int getCapacity();
	void add(EventComponent* event);
	void remove(EventComponent*  event);
};

#endif

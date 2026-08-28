#ifndef ARTS_H
#define ARTS_H

#include "EventGroup.h"
#include "EventComponent.h"

#include <vector>
#include <iostream>

using namespace std;

class Arts : public EventGroup {



public:
	Arts();
	~Arts();
	void update();
	void open();
	void close();
	void reportStatus();
	int getCapacity();
	void add(EventComponent* event);
	void remove(EventComponent* event);
};

#endif

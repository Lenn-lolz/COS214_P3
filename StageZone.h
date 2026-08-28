#ifndef STAGEZONE_H
#define STAGEZONE_H

#include "EventGroup.h"
#include "EventComponent.h"

#include <vector>
#include <iostream>

using namespace std;

class StageZone : public EventGroup {

public:
	StageZone();
	~StageZone();
	void update();
	void open();
	void close();
	void reportStatus();
	int getCapacity();
	void add(EventComponent* event);
	void remove(EventComponent* event);
};

#endif

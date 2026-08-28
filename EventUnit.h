#ifndef EVENTUNIT_H
#define EVENTUNIT_H

#include "EventGroup.h"
#include "EventComponent.h"

#include <vector>
#include <iostream>

using namespace std;

class EventUnit : public EventComponent {

public:
	EventUnit();
	virtual void update() = 0;
	virtual ~EventUnit() = 0;
};

#endif

#ifndef EVENTCOMPONENT_H
#define EVENTCOMPONENT_H

#include "EventControl.h"
#include "Observer.h"

class EventComponent : public Observer
{

public:
	virtual ~EventComponent() = 0;
	virtual void update(Notice notification) = 0;
};

#endif

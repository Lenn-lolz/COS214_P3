#ifndef EVENTCOMPONENT_H
#define EVENTCOMPONENT_H

#include "EventControl.h"
#include "Observer.h"

class EventComponent : public Observer
{

public:
	virtual ~EventComponent() = 0;
	virtual void updateBoolean(string notice, bool notification) = 0;
	virtual void updateString(string notice, string notification) = 0;
};

#endif

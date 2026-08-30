#ifndef EVENTCOMPONENT_H
#define EVENTCOMPONENT_H

#include "Observer.h"
#include "EventControl.h"

class EventComponent : public Observer {

public:
	virtual ~EventComponent() = 0;
	virtual void update(Notice notification) = 0;
	void open();
	void close();
	void evacuate();
};

#endif

#ifndef EVENTUNIT_H
#define EVENTUNIT_H
#include "EventComponent.h"

class EventUnit: public EventComponent{
	public:
		EventUnit();
		virtual ~EventUnit();
		virtual void update() = 0;
};

#endif
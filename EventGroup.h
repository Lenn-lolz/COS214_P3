#ifndef EVENTGROUP_H
#define EVENTGROUP_H

#include "EventComponent.h"

class EventGroup : public EventComponent
{

public:
	vector<EventComponent *> children;
	virtual ~EventGroup() = 0;
	void update(bool notification);
	void addChild(EventComponent *eComponent);
	void removeChild(EventComponent *eComponent);
};

#endif

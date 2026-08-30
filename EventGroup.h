#ifndef EVENTGROUP_H
#define EVENTGROUP_H

#include "EventComponent.h"

class EventGroup : public EventComponent
{
private:
	EventControl *subject;
	vector<EventComponent *> children;

public:
	EventGroup(EventControl *subject);
	virtual ~EventGroup() = 0;
	void addChild(EventComponent *eComponent);
	void removeChild(EventComponent *eComponent);
	// void openGroup(string name);
	// void closeGroup(string name);
	// void evacuateGroup(string name);
	void updateChildren(Notice notification);
	void update(Notice notification);
};

#endif

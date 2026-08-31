#ifndef EVENTGROUP_H
#define EVENTGROUP_H

#include "EventComponent.h"

class EventGroup : public EventComponent
{
private:
	EventControl *subject;
	vector<EventComponent *> children;
	string name;

public:
	EventGroup(EventControl *subject, string name);
	virtual ~EventGroup() = 0;
	void addChild(EventComponent *eComponent);
	void removeChild(EventComponent *eComponent);
	void updateChildren(Notice notification);
	void update(Notice notification);
	void openFunction();
	void close();
	void reportStatus();
	int getCapacity();
};

#endif

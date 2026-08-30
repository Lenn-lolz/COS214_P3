#ifndef EVENTGROUP_H
#define EVENTGROUP_H

#include "EventComponent.h"

class EventGroup : public EventComponent
{
private:
	EventControl *subject;
	vector<EventComponent *> children;
	bool open;

public:
	EventGroup(EventControl *subject);
	virtual ~EventGroup() = 0;
	void update(bool notification);
	void addChild(EventComponent *eComponent);
	void removeChild(EventComponent *eComponent);
	void openGroup(string name);
	void closeGroup(string name);
	void evacuateGroup(string name);
	void updateBoolean(string notice, bool notification);
	void updateString(string notice, string notification);
	virtual void onUpdateBoolean(string notice, bool notification) = 0;
	virtual void onUpdateString(string notice, string notification) = 0;
};

#endif

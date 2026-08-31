/**
 * @brief Abstract composite that inherits from component
 * 
 * Interface for concrete composites and contains children that are concrete leaves or concrete composites
 */

#ifndef EVENTGROUP_H
#define EVENTGROUP_H

#include "EventComponent.h"
#include "EventControl.h"

#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

class EventGroup : public EventComponent {
protected:
	EventControl *subject;
	vector<EventComponent*> children;
public:
	EventGroup(EventControl *subject);
	virtual ~EventGroup() = 0;
	void update(Notice notification);
	void addChild(EventComponent* eComponent);
	void removeChild(EventComponent* eComponent);
	void transferChild(EventComponent* child,EventGroup* newGroup);
	void open();
	void close();
	int getCapacity();
	void reportStatus();
	void clean();
};

#endif

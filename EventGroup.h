#ifndef EVENTGROUP_H
#define EVENTGROUP_H

#include "EventComponent.h"

#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

class EventGroup : public EventComponent {
protected:
	vector<EventComponent*> children;
public:
	
	virtual ~EventGroup() = 0;
	void update(Notice notification);
	void addChild(EventComponent* eComponent);
	void removeChild(EventComponent* eComponent);
};

#endif

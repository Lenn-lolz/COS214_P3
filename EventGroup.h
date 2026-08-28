#ifndef EVENTGROUP_H
#define EVENTGROUP_H

#include "EventComponent.h"

#include <vector>
#include <iostream>
using namespace std;


class EventGroup : public EventComponent {
private:
	vector<EventComponent*> children;
public:

	EventGroup();
	~EventGroup();
};

#endif

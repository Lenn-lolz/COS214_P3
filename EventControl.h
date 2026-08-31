/**
 * @brief Concrete subject 
 * 
 * Implements the subject being observed.Stores objects that are observing it
 */

#ifndef EVENTCONTROL_H
#define EVENTCONTROL_H

#include "Subject.h"
#include "Notice.h"
#include "Observer.h"
#include "EventComponent.h"


#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

class EventComponent;

using namespace std;

class EventControl : public Subject {

private:
	EventComponent* cleaningTarget;

public:
	EventControl();
	~EventControl();
	void notify(Notice notif, string message);
	void setCleaningTarget(EventComponent* target);
	EventComponent* getCleaningTarget();

};

#endif

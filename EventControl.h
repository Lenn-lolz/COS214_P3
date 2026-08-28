#ifndef EVENTCONTROL_H
#define EVENTCONTROL_H

#include "Observer.h"
#include "Subject.h"

#include <vector>
#include <iostream>
using namespace std;


class EventControl : public Subject {

public:
	//State* subjectState;

	EventControl();
	~EventControl();
	void attach(Observer* observer);
	void detach(Observer* observer);
	void notify();

	//State* getState();
	//void setState(State* state);
};

#endif

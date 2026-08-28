#ifndef EVENTCONTROL_H
#define EVENTCONTROL_H

class EventControl : public Subject {

public:
	State* subjectState;

	EventControl();

	void ~EventControl();

	void attach(Observer* observer);

	void detach(Observer* observer);

	void notify();

	State* getState();

	void setState(State* state);

	void ~EventControl();

	void ~EventControl();
};

#endif

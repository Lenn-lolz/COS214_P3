#ifndef CLEANERS_H
#define CLEANERS_H

#include "EventUnit.h"

class Cleaners : public EventUnit
{

private:
	bool active;
	EventControl *subject;

public:
	Cleaners(EventControl *subject, bool active);
	~Cleaners();
	bool getActive();
	void setActive(bool active);
	void cleaningUp(string name);
	void onUpdateBoolean(string notice, bool notification);
	void onUpdateString(string notice, string notification);
};

#endif

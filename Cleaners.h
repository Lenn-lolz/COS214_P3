#ifndef CLEANERS_H
#define CLEANERS_H

#include "EventUnit.h"

class Cleaners : public EventUnit
{

private:
	bool active;
	EventControl *subject;
	int teamSize;
	string teamName;

public:
	Cleaners(EventControl *subject, bool active, string teamName, int teamSize);
	~Cleaners();
	void openFunction();
	void close();
	void reportStatus();
	int getCapacity();
	bool getActive();
	void setActive(bool active);
	void cleaningUp(string name);
	void update(Notice notification);
};

#endif

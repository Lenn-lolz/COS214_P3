#ifndef PARAMEDICS_H
#define PARAMEDICS_H

#include "EventUnit.h"

class Paramedics : public EventUnit
{

private:
	EventControl *subject;
	bool onDuty;
	string teamName;
	int teamSize;

public:
	Paramedics(EventControl *subject, bool onDuty, string name, int teamSize);
	~Paramedics();
	void addressingWound();
	void update(Notice notification);
	void openFunction();
	void close();
	void reportStatus();
	int getCapacity();
};

#endif

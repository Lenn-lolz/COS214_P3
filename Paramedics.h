#ifndef PARAMEDICS_H
#define PARAMEDICS_H

#include "EventUnit.h"

class Paramedics : public EventUnit
{

private:
	EventControl *subject;
	bool onDuty;

public:
	Paramedics(EventControl *subject, bool onDuty);
	~Paramedics();
	void addressingWound();
	void onUpdateBoolean(string notice, bool notification);
	void onUpdateString(string notice, string notification);
};

#endif

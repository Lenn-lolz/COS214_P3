#ifndef DEMOZONE_H
#define DEMOZONE_H

#include "EventUnit.h"

class DemoZone : public EventUnit
{

private:
	int capacity;
	string name;
	int maxCapacity;
	EventControl *subject;
	bool open;

public:
	DemoZone(EventControl *subject, int capacity, string name, int maxCapacity);
	~DemoZone();
	int getCapacity();
	void setCapacity(int capacity);
	string getName();
	void setName(string name);
	int getMaxCapacity();
	void setMaxCapacity(int capacity);
	void startPresentation();
	void onUpdateBoolean(string notice, bool notification);
	void onUpdateString(string notice, string notification);
};

#endif

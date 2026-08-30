#ifndef MEETANDGREET_H
#define MEETANDGREET_H

#include "EventUnit.h"

class MeetAndGreet : public EventUnit
{

private:
	int capacity;
	string name;
	int maxCapacity;
	EventControl *subject;
	bool open;
	string presentation;

public:
	MeetAndGreet(EventControl *subject, int capacity, string name, int maxCapacity);
	~MeetAndGreet();
	int getCapacity();
	void setCapacity(int capacity);
	string getName();
	void setName(string name);
	int getMaxCapacity();
	void setMaxCapacity(int capacity);
	void startPresentation();
	void update(Notice notification);
};

#endif

/**
 * @brief Concrete leaf and concrete observer that implements Meet and greet
 * 
 * Maintains ref to subject being observed.
 */

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
};

#endif
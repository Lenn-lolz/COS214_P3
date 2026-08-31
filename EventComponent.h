/**
 * @brief Abstract event component in EventFlow.
 *
 * common interface for EventGroup composites and EventUnit leaf objects.
 */ 

#ifndef EVENTCOMPONENT_H
#define EVENTCOMPONENT_H

#include "Observer.h"
#include "EventControl.h"

#include <iostream>

using namespace std;

class EventComponent : public Observer {
protected:
	int capacity;
	int cleanliness;
	string name;
	bool openUnit;
	string status;

public:
	/**
     * @brief Virtual destructor.
     */
	virtual ~EventComponent() = 0;
	virtual void update(Notice notification) = 0;
	virtual void open() = 0;
	virtual void close() = 0;
	virtual void reportStatus() = 0;
	virtual int getCapacity() = 0;
	string getName();
	virtual void clean() = 0;
	int getCleaness();
};

#endif

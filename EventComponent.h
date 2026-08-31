#ifndef EVENTCOMPONENT_H
#define EVENTCOMPONENT_H

#include "EventControl.h"
#include "Observer.h"

class EventGroup;
class EventComponent : public Observer
{
protected:
public:
	virtual ~EventComponent() = 0;
	virtual void update(Notice notification) = 0;
	virtual void openFunction() = 0;
	virtual void close() = 0;
	virtual void reportStatus() const = 0;
	virtual int getCapacity() const = 0;
};
inline EventComponent::~EventComponent() {}
#endif

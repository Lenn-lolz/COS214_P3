#ifndef EVENTCOMPONENT_H
#define EVENTCOMPONENT_H

class EventComponent : public Observer {


public:
	EventComponent();

	virtual void ~EventComponent() = 0;

	virtual void update() = 0;

	virtual int getCapacity() = 0;

	virtual void add(EventComponent event) = 0;

	virtual void remove(EventComponent event) = 0;

	virtual void open() = 0;

	virtual void close() = 0;

	virtual void setCapacity(int capacity) = 0;

	virtual void evacuate() = 0;

	virtual void majorStageEvent() = 0;

	virtual void reportStatus() = 0;

	virtual void ~EventComponent() = 0;

	virtual void ~EventComponent() = 0;
};

#endif

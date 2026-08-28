#ifndef EVENTGROUP_H
#define EVENTGROUP_H

class EventGroup : public EventComponent {

public:

	EventGroup();

	void ~EventGroup();

	virtual void open() = 0;

	virtual void close() = 0;

	virtual void reportStatus() = 0;

	virtual int getCapacity() = 0;

	virtual void update() = 0;

	virtual void add(EventComponent event) = 0;

	virtual void remove(EventComponent event) = 0;

	virtual void ~EventGroup() = 0;

	void ~EventGroup();
};

#endif

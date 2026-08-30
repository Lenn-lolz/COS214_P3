#ifndef EVENTCOMPONENT_H
#define EVENTCOMPONENT_H

class EventComponent : public Observer {


public:
	virtual void ~EventComponent() = 0;

	virtual void update(boolean notification) = 0;

	void open();

	void close();

	void evacuate();
};

#endif

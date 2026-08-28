#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {


public:
	Observer();

	void ~Observer();

	virtual void update() = 0;

	virtual void evacuate() = 0;

	virtual void open() = 0;

	virtual void majorStageEvent() = 0;

	virtual void close() = 0;

	virtual void setCapacity() = 0;

	virtual void reportStatus() = 0;

	virtual void ~Observer() = 0;

	void ~Observer();
};

#endif

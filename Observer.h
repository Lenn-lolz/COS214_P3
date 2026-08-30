#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {


public:
	virtual void ~Observer() = 0;

	virtual void update(boolean notification) = 0;
};

#endif

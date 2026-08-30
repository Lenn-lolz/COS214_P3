#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{

public:
	virtual ~Observer() = 0;
	virtual void update(bool notification) = 0;
};

#endif

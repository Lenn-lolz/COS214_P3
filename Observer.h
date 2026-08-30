#ifndef OBSERVER_H
#define OBSERVER_H
#include <iostream>
#include <string>

class Observer
{

public:
	virtual ~Observer() = 0;
	virtual void updateBoolean(string notice, bool notification) = 0;
	virtual void updateString(string notice, string notification) = 0;
};

#endif

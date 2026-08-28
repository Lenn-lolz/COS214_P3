#ifndef STAFF_H
#define STAFF_H

#include "EventUnit.h"
#include "EventComponent.h"

#include <vector>
#include <iostream>

class Staff : public EventUnit {

public:
	Staff();
	virtual ~Staff() = 0;		
	virtual void update() = 0;
};

#endif

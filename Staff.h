#ifndef STAFF_H
#define STAFF_H
#include "EventUnit.h"

class Staff: public EventUnit{
	public:
		Staff();
		virtual ~Staff();
		virtual void update() = 0;
};

#endif
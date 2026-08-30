#ifndef EVENTUNIT_H
#define EVENTUNIT_H

#include "EventComponent.h"

class EventUnit : public EventComponent
{

public:
	virtual ~EventUnit() = 0;
	void update(Notice notification);
};

#endif

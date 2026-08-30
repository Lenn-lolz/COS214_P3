#ifndef EVENTUNIT_H
#define EVENTUNIT_H

#include "EventComponent.h"

class EventUnit : public EventComponent
{

public:
	virtual ~EventUnit() = 0;
	void updateBoolean(string notice, bool notification);
	void updateString(string notice, string notification);
	virtual void onUpdateBoolean(string notice, bool notification) = 0;
	virtual void onUpdateString(string notice, string notification) = 0;
};

#endif

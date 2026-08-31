#ifndef EVENTUNIT_H
#define EVENTUNIT_H

#include "EventComponent.h"

class EventUnit : public EventComponent
{

public:
	virtual ~EventUnit() = 0;
	virtual void update(Notice notification)=0;
    virtual void open() =0;
    virtual void close() =0;
    virtual int getCapacity() =0;
    virtual void reportStatus() =0;
    virtual void clean() =0;
};

#endif
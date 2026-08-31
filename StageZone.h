/**
 * @brief Concrete composite and concrete observer that can have leaves or composites
 * 
 * Maintains ref to subject being observed.
 */

#ifndef STAGEZONE_H
#define STAGEZONE_H

#include "EventGroup.h"

class StageZone : public EventGroup
{

private:
	EventControl *subject;
	//bool open;
	string lightColour;
	bool majorStageEvent;

public:
	StageZone(EventControl *subject);
	~StageZone();
	void majorStage_Event();
	void update(Notice notification);
	void open();
	void close();
	int getCapacity();
	void reportStatus();
};

#endif
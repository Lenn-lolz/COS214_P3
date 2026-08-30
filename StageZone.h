#ifndef STAGEZONE_H
#define STAGEZONE_H

#include "EventGroup.h"

class StageZone : public EventGroup
{

private:
	EventControl *subject;
	bool open;
	string lightColour;
	bool majorStageEvent;

public:
	StageZone(EventControl *subject, bool open, string lightColour);
	~StageZone();
	void majorStage_Event();
};

#endif

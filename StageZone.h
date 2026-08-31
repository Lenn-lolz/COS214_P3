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
	StageZone(EventControl *subject, string name);
	~StageZone();
	void majorStage_Event();
	void update(Notice notification);
};

#endif

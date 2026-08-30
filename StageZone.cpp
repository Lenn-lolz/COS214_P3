#include "StageZone.h"

StageZone::StageZone(EventControl *subject) : EventGroup(subject)
{
	this->lightColour = "white";
	this->majorStageEvent = false;
	subject->attach(this);
}

void StageZone::majorStage_Event()
{
	// TODO - implement StageZone::majorStage Event
	throw "Not yet implemented";
}

void StageZone::update(Notice notification)
{
	switch (notification)
	{ // implementation based on notification?
	case OPEN:
		open = true;
		break;
	case CLOSE:
		open = false;
		break;
	case EVACUATE:
		break;
	case STAGE_EVENT:
		break;
	case MAX_CAPACITY:
		open = false;
		break;
	}
	EventGroup::update(notification);
}
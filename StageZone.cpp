#include "StageZone.h"

StageZone::StageZone(EventControl *subject, string name) : EventGroup(subject, name)
{
	this->lightColour = "white";
	this->majorStageEvent = false;
}

StageZone::~StageZone() {}

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
		majorStageEvent = false;
		break;
	case EVACUATE:
		open = false;
		majorStageEvent = false;
		break;
	case STAGE_EVENT:
		majorStageEvent = true;
		break;
	case MAX_CAPACITY:
		open = false;
		break;
	}
	EventGroup::update(notification);
}
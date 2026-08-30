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

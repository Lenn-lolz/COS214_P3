#include "Arts.h"

Arts::Arts(EventControl *subject) : EventGroup(subject)
{
	this->clean = true;
	this->lightColour = "white";
	subject->attach(this);
}

vector<string> Arts::getDecorations()
{
	return this->decorations;
}

void Arts::addDecoration(string decoration)
{
	this->decorations.push_back(decoration);
}

void Arts::Sale()
{
	// TODO - implement Arts::Sale
	throw "Not yet implemented";
}
void Arts::update(Notice notification)
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
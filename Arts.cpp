#include "Arts.h"

Arts::Arts(EventControl *subject, string name) : EventGroup(subject, name)
{
	this->clean = true;
	this->lightColour = "white";
}

Arts::~Arts() {}

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
		open = false;
		break;
	case STAGE_EVENT:
		break;
	case MAX_CAPACITY:
		break;
	}
	EventGroup::update(notification);
}
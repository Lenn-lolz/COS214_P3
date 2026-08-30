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
	// TODO - implement Arts::addDecoration
	throw "Not yet implemented";
}

void Arts::Sale()
{
	// TODO - implement Arts::Sale
	throw "Not yet implemented";
}

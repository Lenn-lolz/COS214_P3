#include "IndieGaming.h"

IndieGaming::IndieGaming(EventControl *subject, int capacity, int maxCapacity) : EventGroup(subject)
{
	this->capacity = capacity;
	this->maxCapacity = maxCapacity;
	this->open = false;
	this->clean = true;
	this->lightColour = "white";
	subject->attach(this);
}

int IndieGaming::getCapacity()
{
	return this->capacity;
}

void IndieGaming::setCapacity(int capacity)
{
	this->capacity = capacity;
}

int IndieGaming::getMaxCapacity()
{
	return this->maxCapacity;
}

void IndieGaming::setMaxCapacity(int maxCapacity)
{
	this->maxCapacity = maxCapacity;
}

vector<string> IndieGaming::getDecorations()
{
	return this->decorations;
}

void IndieGaming::setDecorations(vector<string> decorations)
{
	this->decorations = decorations;
}

void IndieGaming::oneGameEvent()
{
	// TODO - implement IndieGaming::oneGameEvent
	throw "Not yet implemented";
}

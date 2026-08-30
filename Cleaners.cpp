#include "Cleaners.h"

Cleaners::Cleaners(EventControl *subject, bool active)
{
	this->subject = subject;
	this->active = false;
	subject->attach(this);
}

bool Cleaners::getActive()
{
	return this->active;
}

void Cleaners::setActive(bool active)
{
	this->active = active;
}

void Cleaners::cleaningUp(string name)
{
	std::cout << "The cleaners are working and are now cleaning up " + name;
}

void Cleaners::onUpdateBoolean(string notice, bool notification)
{
	if (notice == "cleanersActive")
	{
		this->setActive(notification);
	}
	if (notice == "evacuate")
	{
		this->setActive(!notification);
	}
}

void Cleaners::onUpdateString(string notice, string notification)
{
	// TO-DO
	return;
}
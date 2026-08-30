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

void Cleaners::update(Notice notification)
{
	switch (notification)
	{ // implementation based on notification?
	case OPEN:
		break;
	case CLOSE:
		break;
	case EVACUATE:
		break;
	case STAGE_EVENT:
		break;
	case MAX_CAPACITY:
		break;
	}
}

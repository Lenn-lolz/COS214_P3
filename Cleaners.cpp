#include "Cleaners.h"

Cleaners::Cleaners(EventControl *subject, bool active, string teamName, int teamSize)
{
	this->subject = subject;
	this->active = false;
	this->teamName = teamName;
	this->teamSize = teamSize;
}

Cleaners::~Cleaners() {}

void Cleaners::openFunction()
{
	this->active = true;
}

void Cleaners::close()
{
	this->active = false;
}

void Cleaners::reportStatus()
{
	std::cout << teamName << (active ? " is cleaning.\n" : " is not cleaning.\n");
}

int Cleaners::getCapacity()
{
	return this->teamSize;
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
		openFunction();
		break;
	case CLOSE:
		close();
		break;
	case EVACUATE:
		close();
		break;
	case STAGE_EVENT:
		break;
	case MAX_CAPACITY:
		break;
	}
}

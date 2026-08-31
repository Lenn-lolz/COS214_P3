#include "Paramedics.h"

Paramedics::Paramedics(EventControl *subject, bool onDuty, string teamName, int teamSize)
{
	this->subject = subject;
	this->onDuty = false;
	this->teamName = teamName;
	this->teamSize;
}

Paramedics::~Paramedics() {}

void Paramedics::openFunction()
{
	this->onDuty = true;
}

void Paramedics::close()
{
	this->onDuty = false;
}

void Paramedics::reportStatus()
{
	std::cout << teamName << (onDuty ? " is on Duty.\n" : " is not on Duty.\n");
}

int Paramedics::getCapacity()
{
	return this->teamSize;
}

void Paramedics::addressingWound()
{
	std::cout << "Paramedic team " + teamName + (onDuty ? " are on Duty and are addressing wounds.\n" : "are not on Duty and are not addressing wounds.\n");
}

void Paramedics::update(Notice notification)
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
		openFunction();
		addressingWound();
		break;
	case STAGE_EVENT:
		break;
	case MAX_CAPACITY:
		break;
	}
}

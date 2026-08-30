#include "Paramedics.h"

Paramedics::Paramedics(EventControl *subject, bool onDuty)
{
	this->subject = subject;
	this->onDuty = false;
	subject->attach(this);
}

void Paramedics::addressingWound()
{
	if (this->onDuty)
	{
		std::cout << "Paramedics are on Duty and are addressing wounds.\n";
	}
	else
	{
		std::cout << "Paramedics are not on Duty and cannot at this time address wounds.\n";
	}
}

void Paramedics::update(Notice notification)
{
	switch (notification)
	{ // implementation based on notification?
	case OPEN:
		break;
	case CLOSE:
		break;
	case EVACUATE:
		this->onDuty = true;
		this->addressingWound();
		break;
	case STAGE_EVENT:
		break;
	case MAX_CAPACITY:
		break;
	}
}

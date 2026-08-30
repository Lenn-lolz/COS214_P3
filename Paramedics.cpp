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
void Paramedics::onUpdateBoolean(string notice, bool notification)
{
	if (notice == "evacuate")
	{
		this->onDuty = !notification;
		this->addressingWound();
	}
	if (notice == "foodCourtOnFire")
	{
		this->onDuty = !notification;
		this->addressingWound();
	}
	if (notice == "onDutyParamedics")
	{
		this->onDuty = notification;
	}
}
void Paramedics::onUpdateString(string notice, string notification)
{
	// TO-DO
	return;
}

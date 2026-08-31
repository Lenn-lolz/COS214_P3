#include "DemoZone.h"

DemoZone::DemoZone(EventControl *subject, int capacity, string name, int maxCapacity)
{
	this->subject = subject;
	this->capacity = capacity;
	this->name = name;
	this->maxCapacity = maxCapacity;
	this->open = false;
}

DemoZone::~DemoZone() {}

void DemoZone::openFunction()
{
	this->open = true;
	startPresentation();
}

void DemoZone::close()
{
	this->open = false;
}

void DemoZone::reportStatus()
{
	std::cout << name << (open ? " is open.\n" : " is closed.\n");
}

int DemoZone::getCapacity()
{
	return this->capacity;
}

void DemoZone::setCapacity(int capacity)
{
	this->capacity = capacity;
}

string DemoZone::getName()
{
	return this->name;
}

void DemoZone::setName(string name)
{
	this->name = name;
}

int DemoZone::getMaxCapacity()
{
	return this->maxCapacity;
}

void DemoZone::setMaxCapacity(int capacity)
{
	this->maxCapacity = capacity;
}

void DemoZone::startPresentation()
{
	// temp cout statement
	cout << "- Presentation starting at" << getName() << "\n";
}

void DemoZone::update(Notice notification)
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
		setCapacity(0);
		break;
	case STAGE_EVENT:
		break;
	case MAX_CAPACITY:
		close();
		break;
	}
}
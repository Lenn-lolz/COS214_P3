#include "ESports.h"

ESports::ESports(EventControl *subject, int capacity, string name, int maxCapacity)
{
	this->subject = subject;
	this->capacity = capacity;
	this->name = name;
	this->maxCapacity = maxCapacity;
	this->open = false;
}

ESports::~ESports() {}

void ESports::openFunction()
{
	this->open = true;
	startPresentation();
}

void ESports::close()
{
	this->open = false;
}

void ESports::reportStatus()
{
	std::cout << name << (open ? " is open.\n" : " is closed.\n");
}

int ESports::getCapacity()
{
	return this->capacity;
}

void ESports::setCapacity(int capacity)
{
	this->capacity = capacity;
}

string ESports::getName()
{
	return this->name;
}

void ESports::setName(string name)
{
	this->name = name;
}

int ESports::getMaxCapacity()
{
	return this->maxCapacity;
}

void ESports::setMaxCapacity(int capacity)
{
	this->maxCapacity = capacity;
}

void ESports::startPresentation()
{
	// temp cout statement
	cout << "- Presentation starting at" << getName() << "\n";
}

void ESports::update(Notice notification)
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
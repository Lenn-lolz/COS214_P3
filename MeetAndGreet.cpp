#include "MeetAndGreet.h"

MeetAndGreet::MeetAndGreet(EventControl *subject, int capacity, string name, int maxCapacity)
{
	this->subject = subject;
	this->capacity = capacity;
	this->name = name;
	this->maxCapacity = maxCapacity;
	this->open = false;
	this->presentation = "";
}

MeetAndGreet::~MeetAndGreet() {}

void MeetAndGreet::openFunction()
{
	this->open = true;
	startPresentation();
}

void MeetAndGreet::close()
{
	this->open = false;
}

void MeetAndGreet::reportStatus()
{
	std::cout << name << (open ? " is open.\n" : " is closed.\n");
}

int MeetAndGreet::getCapacity()
{
	return this->capacity;
}

void MeetAndGreet::setCapacity(int capacity)
{
	this->capacity = capacity;
}

string MeetAndGreet::getName()
{
	return this->name;
}

void MeetAndGreet::setName(string name)
{
	this->name = name;
}

int MeetAndGreet::getMaxCapacity()
{
	return this->maxCapacity;
}

void MeetAndGreet::setMaxCapacity(int capacity)
{
	this->maxCapacity = capacity;
}

void MeetAndGreet::startPresentation()
{
	// temp cout statement
	cout << "- Presentation starting at" << getName() << "\n";
}

void MeetAndGreet::update(Notice notification)
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

#include "MeetAndGreet.h"

MeetAndGreet::MeetAndGreet(EventControl *subject, int capacity, string name, int maxCapacity)
{
	this->subject = subject;
	this->capacity = capacity;
	this->name = name;
	this->maxCapacity = maxCapacity;
	this->open = false;
	this->presentation = "";
	subject->attach(this);
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
	std::cout << "Meet and Greet Stage " + this->name + " is starting the presentation of " + this->presentation;
}

void MeetAndGreet::update(Notice notification)
{
	switch (notification)
	{ // implementation based on notification?
	case OPEN:
		open = true;
		break;
	case CLOSE:
		open = false;
		break;
	case EVACUATE:
		break;
	case STAGE_EVENT:
		break;
	case MAX_CAPACITY:
		open = false;
		break;
	}
}

#include "EventGroup.h"

EventGroup::EventGroup(EventControl *subject)
{
	this->subject = subject;
	this->open = false;
}

void EventGroup::updateBoolean(string notice, bool notification)
{
	onUpdateBoolean(notice, notification);
}
void EventGroup::updateString(string notice, string notification)
{
	onUpdateString(notice, notification);
}

void EventGroup::addChild(EventComponent *eComponent)
{
	children.push_back(eComponent);
}

void EventGroup::removeChild(EventComponent *eComponent)
{
	std::erase(this->children, eComponent);
}

void EventGroup::openGroup(string name)
{
	this->open = true;
	std::cout << name + " has been opened.\n";
}

void EventGroup::closeGroup(string name)
{
	this->open = false;
	std::cout << name + " has been opened.\n";
}

void EventGroup::evacuateGroup(string name)
{
	this->open = false;
	std::cout << name + " has been opened.\n";
}

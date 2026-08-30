#include "EventGroup.h"

EventGroup::EventGroup(EventControl *subject)
{
	this->subject = subject;
	subject->attach(this);
}

void EventGroup::update(Notice notification)
{
	updateChildren(notification);
}

void EventGroup::updateChildren(Notice notification)
{
	for (EventComponent *child : children)
	{
		child->update(notification);
	}
}
void EventGroup::addChild(EventComponent *eComponent)
{
	children.push_back(eComponent);
}

void EventGroup::removeChild(EventComponent *eComponent)
{
	std::erase(this->children, eComponent);
}

/*void EventGroup::openGroup(string name)
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
}*/

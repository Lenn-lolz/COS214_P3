#include "EventGroup.h"

EventGroup::EventGroup(EventControl *subject, string name)
{
	this->subject = subject;
	this->name = name;
	subject->attach(this);
}

void EventGroup::openFunction()
{
	for (EventComponent *child : children)
		child->openFunction();
}
void EventGroup::close()
{
	for (EventComponent *child : children)
		child->close();
}
void EventGroup::reportStatus()
{
	std::cout << name << ":\n";
	for (EventComponent *child : children)
		child->reportStatus();
}
int EventGroup::getCapacity()
{
	for (EventComponent *child : children)
		child->getCapacity();
	return 1;
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
	children.erase(std::remove(children.begin(), children.end(), eComponent), children.end());
}

EventGroup::~EventGroup()
{
	for (EventComponent *child : children)
	{
		delete child;
	}
	children.clear();
}
#include "ESports.h"

ESports::ESports(EventControl* subject, int capacity, string name, int maxCapacity) {
	this->subject = subject;
    this->capacity = capacity;
    this->name = name;
    this->maxCapacity = maxCapacity;
    this->open = false;
    subject->attach(this);
}
ESports::~ESports(){

}
int ESports::getCapacity() {
	return this->capacity;
}

void ESports::setCapacity(int capacity) {
	this->capacity = capacity;
}

string ESports::getName() {
	return this->name;
}

void ESports::setName(string name) {
	this->name = name;
}

int ESports::getMaxCapacity() {
	return this->maxCapacity;
}

void ESports::setMaxCapacity(int capacity) {
	this->maxCapacity = capacity;
}

void ESports::startPresentation() {
	//temp cout statement
	cout <<"- Presentation starting at" << getName() << "\n";
}

void ESports::update(Notice notification)
{
	switch(notification){ //implementation based on notification?
		case OPEN:
		    open = true;
        	startPresentation();
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
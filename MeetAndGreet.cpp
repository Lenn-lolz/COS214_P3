#include "MeetAndGreet.h"

MeetAndGreet::MeetAndGreet(EventControl* subject, int capacity, string name, int maxCapacity) {

}
MeetAndGreet::~MeetAndGreet(){

}
int MeetAndGreet::getCapacity() {
	return this->capacity;
}

void MeetAndGreet::setCapacity(int capacity) {
	this->capacity = capacity;
}

string MeetAndGreet::getName() {
	return this->name;
}

void MeetAndGreet::setName(string name) {
	this->name = name;
}

int MeetAndGreet::getMaxCapacity() {
	return this->maxCapacity;
}

void MeetAndGreet::setMaxCapacity(int capacity) {
	this->maxCapacity = capacity;
}

void MeetAndGreet::startPresentation() {

}

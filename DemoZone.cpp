#include "DemoZone.h"

DemoZone::DemoZone(EventControl* subject, int capacity, string name, int maxCapacity) {

}
DemoZone::~DemoZone(){

}
int DemoZone::getCapacity() {
	return this->capacity;
}

void DemoZone::setCapacity(int capacity) {
	this->capacity = capacity;
}

string DemoZone::getName() {
	return this->name;
}

void DemoZone::setName(string name) {
	this->name = name;
}

int DemoZone::getMaxCapacity() {
	return this->maxCapacity;
}

void DemoZone::setMaxCapacity(int capacity) {
	this->maxCapacity = capacity;
}

void DemoZone::startPresentation() {

}

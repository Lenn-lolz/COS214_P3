#include "DemoZone.h"
#include <string>
#include <iostream>
#include <sstream>

DemoZone::DemoZone(int maxCapacity):maxCapacity(maxCapacity){
	stringstream m;
	m << maxCapacity;
	string temp;
	m >> temp;
	name = "demoStage_"+temp;
}

void DemoZone::update() {
	// TODO - implement DemoZone::update
	throw "Not yet implemented";
}

int DemoZone::getCapacity(){
	return capacity;
}

void DemoZone::setCapacity(int capacity){
	this->capacity = capacity;
}

string DemoZone::getName(){
	return name;
}

void DemoZone::setName(string name){
	cout<<"Stage "<<this->name<<" has been renamed to "<<name<<endl;
	this->name = name;
}

int DemoZone::getMaxCapacity(){
	return maxCapacity;
}

void DemoZone::setMaxCapacity(int capacity){
	cout<<"Extra seating has been added to "<<name<<endl;
	maxCapacity = capacity;
}
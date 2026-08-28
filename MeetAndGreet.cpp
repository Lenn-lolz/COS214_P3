#include "MeetAndGreet.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

MeetAndGreet::MeetAndGreet(int maxCapacity){
	stringstream m;
	m << maxCapacity;
	string temp;
	m >> temp;
	name = "meetGreetStage_"+temp;
}

MeetAndGreet::~MeetAndGreet(){}

void MeetAndGreet::update(){
	// TODO - implement MeetAndGreet::update
	throw "Not yet implemented";
}

int MeetAndGreet::getCapacity(){
	return capacity;
}

void MeetAndGreet::setCapacity(int capacity){
	this->capacity = capacity;
}

string MeetAndGreet::getName(){
	return name;
}

void MeetAndGreet::setName(string name){
	cout<<"Stage "<<this->name<<" has been renamed to "<<name<<endl;
	this->name = name;
}

int MeetAndGreet::getMaxCapacity(){
	return maxCapacity;
}

void MeetAndGreet::setMaxCapacity(int capacity){
	cout<<"Extra seating has been added to "<<name<<endl;
	maxCapacity = capacity;
}
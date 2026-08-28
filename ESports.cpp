#include "ESports.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

ESports::ESports(int maxCapacity):maxCapacity(maxCapacity){
	stringstream m;
	m << maxCapacity;
	string temp;
	m >> temp;
	name = "eSportsStage_"+temp;
}

ESports::~ESports(){}

void ESports::update(){//potential functionality of update for stages idk
	if(capacity>maxCapacity){
		cout<<name<<" is over capacity\n"<<"Has: "<<capacity<<" Should: "<<maxCapacity<<endl;
		cout<<"Removed "<<capacity-maxCapacity<<" person/people"<<endl;
		capacity = maxCapacity;
	}
}

int ESports::getCapacity(){
	return capacity;
}

void ESports::setCapacity(int capacity){//maybe have the sent capacity be something like people entering
	this->capacity = capacity;
}

string ESports::getName(){
	return name;
}

void ESports::setName(string name){
	cout<<"Stage "<<this->name<<" has been renamed to "<<name<<endl;
	this->name = name;
}

int ESports::getMaxCapacity(){
	return maxCapacity;
}

void ESports::setMaxCapacity(int capacity){
	cout<<"Extra seating has been added to "<<name<<endl;
	maxCapacity = capacity;
}
#include "Booth.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

Booth::Booth(){}

Booth::~Booth(){}

void Booth::update(){
	// TODO - implement Booth::update
	throw "Not yet implemented";
}

Booth* Booth::clone(){
	//return new Booth(); //Gonna fix this later -Rei
}

string Booth::getName(){
	return name;
}

void Booth::setName(string name){
	this->name = name;
}

int Booth::getBoothNumber(){
	return boothNumber;
}

void Booth::setBoothNumber(int boothNumber){
	this->boothNumber = boothNumber;
}
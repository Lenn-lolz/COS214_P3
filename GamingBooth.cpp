#include "GamingBooth.h"

GamingBooth::GamingBooth(EventClass* subject, string name, int boothNumber) {
	// TODO - implement GamingBooth::GamingBooth
	throw "Not yet implemented";
}

GamingBooth::GamingBooth(GamingBooth& booth) {
	// TODO - implement GamingBooth::GamingBooth
	throw "Not yet implemented";
}

void GamingBooth::update(boolean notification) {
	// TODO - implement GamingBooth::update
	throw "Not yet implemented";
}

ProductBooth* GamingBooth::clone() {
	// TODO - implement GamingBooth::clone
	throw "Not yet implemented";
}

string GamingBooth::getName() {
	return this->name;
}

void GamingBooth::setName(string name) {
	this->name = name;
}

int GamingBooth::getBoothNumber() {
	return this->boothNumber;
}

void GamingBooth::setBoothNumber(int boothNumber) {
	this->boothNumber = boothNumber;
}

string GamingBooth::getGame() {
	return this->game;
}

void GamingBooth::setGame(string game) {
	this->game = game;
}

void GamingBooth::playGame() {
	// TODO - implement GamingBooth::playGame
	throw "Not yet implemented";
}

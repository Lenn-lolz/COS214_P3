#include "GamingBooth.h"

GamingBooth::GamingBooth(EventControl* subject, string name, int boothNumber) {

}

GamingBooth::~GamingBooth(){

}

GamingBooth::GamingBooth(GamingBooth& booth) {

}

void GamingBooth::update(Notice notification) {

}

GamingBooth* GamingBooth::clone() {

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

}

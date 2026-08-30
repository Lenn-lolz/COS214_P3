#include "GamingBooth.h"

GamingBooth::GamingBooth(EventControl *subject, string name, int boothNumber)
{
	this->subject = subject;
	this->name = name;
	this->boothNumber = boothNumber;
	subject->attach(this);
}

GamingBooth::GamingBooth(GamingBooth &booth) : subject(booth.subject), name(booth.name), boothNumber(booth.boothNumber), game(booth.game)
{
}

void GamingBooth::update(bool notification)
{
	// TODO - implement GamingBooth::update
	throw "Not yet implemented";
}

GamingBooth *GamingBooth::clone()
{
	// TODO - implement GamingBooth::clone
	throw "Not yet implemented";
}

string GamingBooth::getName()
{
	return this->name;
}

void GamingBooth::setName(string name)
{
	this->name = name;
}

int GamingBooth::getBoothNumber()
{
	return this->boothNumber;
}

void GamingBooth::setBoothNumber(int boothNumber)
{
	this->boothNumber = boothNumber;
}

string GamingBooth::getGame()
{
	return this->game;
}

void GamingBooth::setGame(string game)
{
	this->game = game;
}

void GamingBooth::playGame()
{
	// TODO - implement GamingBooth::playGame
	throw "Not yet implemented";
}

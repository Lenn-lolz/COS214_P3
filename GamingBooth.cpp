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

void GamingBooth::update(Notice notification)
{
	switch (notification)
	{ // implementation based on notification?
	case OPEN:
		open = true;
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

#include "GamingBooth.h"

GamingBooth::GamingBooth(EventControl *subject, string name, int boothNumber)
{
	this->subject = subject;
	this->name = name;
	this->boothNumber = boothNumber;
}

/*GamingBooth::GamingBooth(GamingBooth &booth) : subject(booth.subject), name(booth.name), boothNumber(booth.boothNumber), game(booth.game)
{
}*/

GamingBooth::~GamingBooth() {}

void GamingBooth::openFunction()
{
	this->open = true;
}

void GamingBooth::close()
{
	this->open = false;
}

void GamingBooth::reportStatus()
{
	std::cout << name << (open ? " is open.\n" : " is closed.\n");
}

int GamingBooth::getCapacity()
{
	if (this->occupied)
	{
		return 1;
	}
	else
		return 0;
}

void GamingBooth::update(Notice notification)
{
	switch (notification)
	{ // implementation based on notification?
	case OPEN:
		openFunction();
		break;
	case CLOSE:
		close();
		break;
	case EVACUATE:
		close();
		occupied = false;
		break;
	case STAGE_EVENT:
		break;
	case MAX_CAPACITY:
		close();
		break;
	}
}

/*GamingBooth *GamingBooth::clone()
{
	GamingBooth *newBooth = new GamingBooth(*this);
	this->subject->attach(newBooth);
	return newBooth;
}*/

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
	occupied = true;
	std::cout << "Gaming Booth " + getName() + "(Booth Number: " + std::to_string(boothNumber) + ") is occupied and occupant is playing " + getGame() + "\n";
}

#ifndef GAMINGBOOTH_H
#define GAMINGBOOTH_H

#include "EventUnit.h"

#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

class GamingBooth : public EventUnit
{

private:
	EventControl *subject;
	string name;
	int boothNumber;
	string game;
	bool open;
	bool occupied;

public:
	GamingBooth(EventControl *subject, string name, int boothNumber);
	GamingBooth(GamingBooth &booth);
	~GamingBooth();
	void update(Notice notification);
	string getName();
	void setName(string name);
	int getBoothNumber();
	void setBoothNumber(int boothNumber);
	string getGame();
	void setGame(string game);
	void playGame();
};

#endif
#ifndef GAMINGBOOTH_H
#define GAMINGBOOTH_H

#include "EventUnit.h"

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
	GamingBooth *clone();
	string getName();
	void setName(string name);
	int getBoothNumber();
	void setBoothNumber(int boothNumber);
	string getGame();
	void setGame(string game);
	void playGame();
};

#endif

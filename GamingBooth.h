#ifndef GAMINGBOOTH_H
#define GAMINGBOOTH_H

class GamingBooth : public EventUnit {

private:
	EventClass* subject;
	string name;
	int boothNumber;
	string game;
	boolean open;
	boolean occupied;

public:
	GamingBooth(EventClass* subject, string name, int boothNumber);

	GamingBooth(GamingBooth& booth);

	void ~GamingBooth();

	void update(boolean notification);

	ProductBooth* clone();

	string getName();

	void setName(string name);

	int getBoothNumber();

	void setBoothNumber(int boothNumber);

	string getGame();

	void setGame(string game);

	void playGame();
};

#endif

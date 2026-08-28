#ifndef BOOTH_H
#define BOOTH_H

class Booth : public EventUnit {


public:
	Booth();

	void ~Booth();
private:
	int boothNumber;
public:

	void update();

	Booth* clone();

	void ~Booth();

	string getName();

	void setName(string name);

	int getBoothNumber();

	void setBoothNumber(int boothNumber);

	void ~Booth();
private:
	string name;
};

#endif

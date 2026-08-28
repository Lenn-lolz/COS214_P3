#ifndef BOOTH_H
#define BOOTH_H


#include "EventUnit.h"

#include <vector>
#include <iostream>

using namespace std;

class Booth : public EventUnit {

private:
	int boothNumber;
	string name;
public:
	Booth();
	~Booth();
	void update();
	Booth* clone();
	string getName();
	void setName(string name);
	int getBoothNumber();
	void setBoothNumber(int boothNumber);

};

#endif

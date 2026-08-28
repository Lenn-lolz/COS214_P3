#ifndef MEETANDGREET_H
#define MEETANDGREET_H

#include "Stage.h"


#include <vector>
#include <iostream>
using namespace std;

class MeetAndGreet : public Stage {

private:
	int capacity;
	string name;
	int maxCapacity;
public:
	MeetAndGreet();
	~MeetAndGreet();
	void update();


};

#endif

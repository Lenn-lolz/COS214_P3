#ifndef STAGE_H
#define STAGE_H

#include "EventUnit.h"
#include "EventComponent.h"

#include <vector>
#include <iostream>

using namespace std;
class Stage : public EventUnit {
private:
	int capacity;
public:

	Stage();
	virtual ~Stage() = 0;
	int getCapacity();
	void setCapacity(int capacity);
	virtual void update() = 0;
	string getName();
	void setName(string name);
	int getMaxCapacity();
	void setMaxCapacity(int capacity);
};

#endif

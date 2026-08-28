#ifndef DEMOZONE_H
#define DEMOZONE_H

#include "Stage.h"

#include <vector>
#include <iostream>

using namespace std;

class DemoZone : public Stage {

private:
	int capacity;
	string name;
	int maxCapacity;
public:
	DemoZone();
	~DemoZone();
	void update();

};

#endif

#ifndef ESPORTS_H
#define ESPORTS_H

#include "Stage.h"

#include <vector>
#include <iostream>

using namespace std;


class ESports : public Stage {

private:
	int capacity;
	string name;
	int maxCapacity;	
public:
	ESports();
	~ESports();
	void update();

};

#endif

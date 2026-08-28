#ifndef INDIEGAMING_H
#define INDIEGAMING_H

#include "EventGroup.h"
#include "EventComponent.h"

#include <vector>
#include <iostream>
using namespace std;

class IndieGaming : public EventGroup {

public:
	IndieGaming();
	~IndieGaming();
	void update();
	void open();
	void close();
	void reportStatus();
	int getCapacity();
	void add(EventComponent* event);
	void remove(EventComponent* event);
};

#endif

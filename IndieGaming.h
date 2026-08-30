#ifndef INDIEGAMING_H
#define INDIEGAMING_H

#include "EventGroup.h"

class IndieGaming : public EventGroup
{

private:
	EventControl *subject;
	int capacity;
	int maxCapacity;
	bool open;
	bool clean;
	string lightColour;
	vector<string> decorations;

public:
	IndieGaming(EventControl *subject, int capacity, int maxCapacity);
	~IndieGaming();
	int getCapacity();
	void setCapacity(int capacity);
	int getMaxCapacity();
	void setMaxCapacity(int maxCapacity);
	vector<string> getDecorations();
	void setDecorations(vector<string> decorations);
	void oneGameEvent();
};

#endif
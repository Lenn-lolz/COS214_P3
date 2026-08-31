/**
 * @brief Concrete composite and concrete observer that can have leaves or composites
 * 
 * Maintains ref to subject being observed.
 */

#ifndef INDIEGAMING_H
#define INDIEGAMING_H

#include "EventGroup.h"

class IndieGaming : public EventGroup
{

private:
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
	void update(Notice notification);
};

#endif
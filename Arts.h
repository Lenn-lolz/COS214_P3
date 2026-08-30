#ifndef ARTS_H
#define ARTS_H

#include "EventGroup.h"

#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
class Arts : public EventGroup {

private:
	EventControl* subject;
	bool open;
	bool clean;
	string lightColour;
	vector<string> decorations;

public:
	Arts(EventControl* subject);
	~Arts();
	vector<string> getDecorations();
	void addDecoration(string decoration);
	void Sale();
};

#endif

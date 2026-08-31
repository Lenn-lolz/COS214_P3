#ifndef ARTS_H
#define ARTS_H

#include "EventGroup.h"

class Arts : public EventGroup
{

private:
	EventControl *subject;
	bool open;
	bool clean;
	string lightColour;
	vector<string> decorations;

public:
	Arts(EventControl *subject, string name);
	~Arts();
	vector<string> getDecorations();
	void addDecoration(string decoration);
	void Sale();
	void update(Notice notification);
};

#endif

#ifndef EVENTCONTROL_H
#define EVENTCONTROL_H

using namespace std;

#include "Subject.h"

class EventControl : public Subject
{

private:
	map<string, bool> boolMap;
	map<string, string> stringMap;

public:
	EventControl();
	~EventControl();
	void notify();
	bool getBooleanState(string key);
	void setBooleanState(string key, bool value);
	string getStringValue(string key);
	void setStringState(string key, string value);
};

#endif

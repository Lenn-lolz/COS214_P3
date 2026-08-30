#ifndef EVENTCONTROL_H
#define EVENTCONTROL_H

#include "Subject.h"
#include "Notice.h"
#include "Observer.h"



#include <vector>
#include <iostream>
#include <algorithm>
#include <map>



using namespace std;

class EventControl : public Subject {

private:
	map<string, bool> boolMap;
	map<string, string> stringMap;

public:
	EventControl();
	~EventControl();
	void notify(Notice notif, string message);
	bool getBooleanState(string key);
	void setBooleanState(string key, bool value);
	string getStringValue(string key);
	void setStringState(string key, string value);
};

#endif

#ifndef EVENTCONTROL_H
#define EVENTCONTROL_H

class EventControl : public Subject {

private:
	map<string, boolean> boolMap;
	map<string, string> stringMap;

public:
	EventControl();

	void ~EventControl();

	void notify();

	boolean getBooleanState(string key);

	void setBooleanState(string key, boolean value);

	string getStringValue(string key);

	void setStringState(string key, string value);
};

#endif

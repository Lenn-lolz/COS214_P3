#ifndef ESPORTS_H
#define ESPORTS_H

#include "EventUnit.h"

class ESports : public EventUnit
{

private:
	int capacity;
	string name;
	int maxCapacity;
	EventControl *subject;
	bool openUnit;

public:
	ESports(EventControl *subject, int capacity, string name, int maxCapacity);
	~ESports();
	void setCapacity(int capacity);
	string getName();
	void setName(string name);
	int getMaxCapacity();
	void setMaxCapacity(int capacity);
	void startPresentation();

	//should add own implementation if receives update
	void update(Notice notif);
	void open();
    void close() ;
    int getCapacity();
    void reportStatus() ;
    void clean();
};

#endif
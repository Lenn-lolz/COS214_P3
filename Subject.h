#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>
#include <map>
#include <vector>

class Subject
{

protected:
	vector<Observer *> observerList;

public:
	virtual ~Subject() = 0;
	void attach(Observer *observer);
	void detach(Observer *observer);
};

#endif

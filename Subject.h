#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

#include <vector>
#include <iostream>

using namespace std;

class Subject {

private:
	vector<Observer*> observerList;

public:
	Subject();
	virtual ~Subject() = 0;
	virtual void attach(Observer* observer) = 0;
	virtual void detach(Observer* observer) = 0;
	virtual void notify() = 0;
	
};

#endif

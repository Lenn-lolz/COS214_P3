#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

#include <algorithm>
#include <vector>

using namespace std;

class Subject {

protected:
	vector<Observer*> observerList;

public:
	virtual ~Subject() = 0;
	void attach(Observer* observer);
	void detach(Observer* observer);
};

#endif

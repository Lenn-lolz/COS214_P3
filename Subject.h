#ifndef SUBJECT_H
#define SUBJECT_H

class Subject {

protected:
	vector<Observer*> observerList;

public:
	virtual void ~Subject() = 0;

	void attach(Observer* observer);

	void detach(Observer* observer);
};

#endif

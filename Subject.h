#ifndef SUBJECT_H
#define SUBJECT_H

class Subject {

private:
	vector<Observer*> observerList;

public:
	Subject();

	void ~Subject();

	virtual void attach(Observer* observer) = 0;

	virtual void detach(Observer* observer) = 0;

	virtual void notify() = 0;

	virtual void ~Subject() = 0;

	void ~Subject();
};

#endif

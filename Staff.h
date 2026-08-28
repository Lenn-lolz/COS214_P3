#ifndef STAFF_H
#define STAFF_H

class Staff : public EventUnit {


public:
	Staff();

	void ~Staff();

	virtual void update() = 0;

	virtual void ~Staff() = 0;

	void ~Staff();
};

#endif

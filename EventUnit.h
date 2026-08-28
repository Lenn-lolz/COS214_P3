#ifndef EVENTUNIT_H
#define EVENTUNIT_H

class EventUnit : public EventComponent {


public:
	EventUnit();

	void ~EventUnit();

	virtual void update() = 0;

	virtual void ~EventUnit() = 0;

	void ~EventUnit();
};

#endif

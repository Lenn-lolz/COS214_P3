#ifndef EVENTUNIT_H
#define EVENTUNIT_H

class EventUnit : public EventComponent {


public:
	virtual void ~EventUnit() = 0;

	void update(boolean notification);
};

#endif

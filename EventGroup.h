#ifndef EVENTGROUP_H
#define EVENTGROUP_H

class EventGroup : public EventComponent {

public:
	vector<EventComponent*> children;

	virtual void ~EventGroup() = 0;

	void update(boolean notification);

	void addChild(EventComponent* eComponent);

	void removeChild(EventComponent* eComponent);
};

#endif

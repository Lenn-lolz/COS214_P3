#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
	Observer();
	virtual ~Observer();
	virtual void update() = 0;
	virtual void evacuate() = 0;
	virtual void open() = 0;
	virtual void majorStageEvent() = 0;
	virtual void close() = 0;
	virtual void setCapacity() = 0;
	virtual void reportStatus() = 0;
};

#endif

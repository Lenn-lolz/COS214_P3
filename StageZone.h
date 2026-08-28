#ifndef STAGEZONE_H
#define STAGEZONE_H

class StageZone : public EventGroup {


public:
	StageZone();

	void ~StageZone();
private:
	vector<EventComponent*> children;
public:

	void update();

	void ~StageZone();

	void open();

	void close();

	void reportStatus();

	int getCapacity();

	void add(EventComponent event);

	void remove(EventComponent event);

	void ~StageZone();
};

#endif

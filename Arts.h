#ifndef ARTS_H
#define ARTS_H

class Arts : public EventGroup {


public:
	Arts();

	void ~Arts();
private:
	vector<EventComponent*> children;
public:

	void update();

	void ~Arts();

	void open();

	void close();

	void reportStatus();

	int getCapacity();

	void add(EventComponent event);

	void remove(EventComponent event);

	void ~Arts();
};

#endif

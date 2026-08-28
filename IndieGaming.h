#ifndef INDIEGAMING_H
#define INDIEGAMING_H

class IndieGaming : public EventGroup {


public:
	IndieGaming();

	void ~IndieGaming();
private:
	vector<EventComponent*> children;
public:

	void update();

	void ~IndieGaming();

	void open();

	void close();

	void reportStatus();

	int getCapacity();

	void add(EventComponent event);

	void remove(EventComponent event);

	void ~IndieGaming();
};

#endif

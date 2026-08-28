#ifndef FOODCOURT_H
#define FOODCOURT_H

class FoodCourt : public EventGroup {


public:
	FoodCourt();

	void ~FoodCourt();
private:
	vector<EventComponent*> children;
public:

	void update();

	void ~FoodCourt();

	void open();

	void close();

	void reportStatus();

	int getCapacity();

	void add(EventComponent event);

	void remove(EventComponent event);

	void ~FoodCourt();
};

#endif

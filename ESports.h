#ifndef ESPORTS_H
#define ESPORTS_H

class ESports : public EventUnit {

private:
	int capacity;
	string name;
	int maxCapacity;
	EventClass* subject;
	boolean open;

public:
	ESports(EventClass* subject, int capacity, string name, int maxCapacity);

	void ~ESports();

	int getCapacity();

	void setCapacity(int capacity);

	string getName();

	void setName(string name);

	int getMaxCapacity();

	void setMaxCapacity(int capacity);

	void startPresentation();
};

#endif

#ifndef DEMOZONE_H
#define DEMOZONE_H

class DemoZone : public EventUnit {

private:
	int capacity;
	string name;
	int maxCapacity;
	EventClass* subject;
	boolean open;

public:
	DemoZone(EventClass* subject, int capacity, string name, int maxCapacity);

	void ~DemoZone();

	int getCapacity();

	void setCapacity(int capacity);

	string getName();

	void setName(string name);

	int getMaxCapacity();

	void setMaxCapacity(int capacity);

	void startPresentation();
};

#endif

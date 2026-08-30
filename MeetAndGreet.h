#ifndef MEETANDGREET_H
#define MEETANDGREET_H

class MeetAndGreet : public EventUnit {

private:
	int capacity;
	string name;
	int maxCapacity;
	EventClass* subject;
	boolean open;

public:
	MeetAndGreet(EventClass* subject, int capacity, string name, int maxCapacity);

	void ~MeetAndGreet();

	int getCapacity();

	void setCapacity(int capacity);

	string getName();

	void setName(string name);

	int getMaxCapacity();

	void setMaxCapacity(int capacity);

	void startPresentation();
};

#endif

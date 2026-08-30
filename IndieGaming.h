#ifndef INDIEGAMING_H
#define INDIEGAMING_H

class IndieGaming : public EventGroup {

private:
	EventClass* subject;
	int capacity;
	int maxCapacity;
	boolean open;
	boolean clean;
	string lightColour;
	vector<string> decorations;

public:
	IndieGaming(EventClass* subject, int capacity, int maxCapacity);

	void ~IndieGaming();

	int getCapacity();

	void setCapacity(int capacity);

	int getMaxCapacity();

	void setMaxCapacity(int maxCapacity);

	vector<string> getDecorations();

	void setDecorations(vector<string> decorations);

	void oneGameEvent();
};

#endif

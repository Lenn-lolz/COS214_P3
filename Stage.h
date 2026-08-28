#ifndef STAGE_H
#define STAGE_H

class Stage : public EventUnit {

public:

	Stage();

	void ~Stage();

	int getCapacity();

	void setCapacity(int capacity);

	virtual void update() = 0;

	void ~Stage();

	string getName();

	void setName(string name);

	int getMaxCapacity();

	void setMaxCapacity(int capacity);

	virtual void ~Stage() = 0;
};

#endif

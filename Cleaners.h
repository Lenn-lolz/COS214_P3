#ifndef CLEANERS_H
#define CLEANERS_H

class Cleaners : public Staff {


public:
	Cleaners();

	void ~Cleaners();

	void update();

	void ~Cleaners();

	bool getActive();

	void setActive(bool active);

	void ~Cleaners();
private:
	boolean active;
};

#endif

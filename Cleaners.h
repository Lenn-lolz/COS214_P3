#ifndef CLEANERS_H
#define CLEANERS_H

class Cleaners : public EventUnit {

private:
	boolean active;
	EventClass* subject;

public:
	Cleaners(EventClass* subject, boolean active);

	void ~Cleaners();

	bool getActive();

	void setActive(bool active);

	void cleaningUp();
};

#endif

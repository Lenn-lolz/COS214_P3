#ifndef PARAMEDICS_H
#define PARAMEDICS_H

class Paramedics : public EventUnit {

private:
	EventClass* subject;
	boolean onDuty;

public:
	Paramedics(EventClass* subject, boolean onDuty);

	void ~Paramedics();

	void addressingWound();
};

#endif

/**
 * @brief Concrete leaf and concrete observer that implements Paramedic functionality
 * 
 * Maintains ref to subject being observed.
 */

#ifndef PARAMEDICS_H
#define PARAMEDICS_H

#include "EventUnit.h"

class Paramedics : public EventUnit
{

private:
	EventControl *subject;
	bool onDuty;

public:
	Paramedics(EventControl *subject, bool onDuty);
	~Paramedics();
	void addressingWound();
	void update(Notice notification);
};

#endif
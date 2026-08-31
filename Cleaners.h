/**
 * @brief Concrete leaf and concrete observer that can have leaves or composites
 * 
 * Maintains ref to subject being observed.
 */

#ifndef CLEANERS_H
#define CLEANERS_H
#include "EventUnit.h"

class Cleaners : public EventUnit {

private:
	bool active;
	EventControl* subject;

public:
	Cleaners(EventControl* subject, bool active);
	~Cleaners();
	void setSubject(EventControl* subject);
	bool getActive();
	void setActive(bool active);
    void cleaningUp(string name);
    void update(Notice notification);
};

#endif

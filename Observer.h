
/**
 * @brief Interface for objects that receive EventFlow notifications
 *
 * Observer,the Observer-pattern interface. Concrete observers
 * implement update() to react to notifications from EventControl
 */
#ifndef OBSERVER_H
#define OBSERVER_H


#include "Notice.h"

class Observer {

public:
	virtual ~Observer() = 0;
	virtual void update(Notice notif) = 0;
};
inline Observer::~Observer()
{
}
#endif

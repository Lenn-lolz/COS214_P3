#ifndef STAGE_H
#define STAGE_H
#include "EventUnit.h"
#include <string>
using namespace std;
//We should maybe remove this entire thing it does not work how I thought maybe I am wrong - Rei
class Stage : public EventUnit {
	public:
		virtual ~Stage();
		virtual int getCapacity() = 0;
		virtual void setCapacity(int capacity) = 0;
		virtual void update() = 0;
		virtual string getName() = 0;
		virtual void setName(string name) = 0;
		virtual int getMaxCapacity() = 0;
		virtual void setMaxCapacity(int capacity) = 0;
};

#endif
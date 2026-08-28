#ifndef CLEANERS_H
#define CLEANERS_H
#include "Staff.h"
using namespace std;

class Cleaners: public Staff{
	private:
		bool active;
	public:
		Cleaners();
		~Cleaners();
		void update();
		bool getActive();
		void setActive(bool active);
};

#endif

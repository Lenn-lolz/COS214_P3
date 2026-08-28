#ifndef PARAMEDICS_H
#define PARAMEDICS_H
#include "Staff.h"

class Paramedics: public Staff{
public:
	Paramedics();
	~Paramedics();
	void update();
};

#endif
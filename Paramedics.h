#ifndef PARAMEDICS_H
#define PARAMEDICS_H

#include "Staff.h"

#include <vector>
#include <iostream>
using namespace std;

class Paramedics : public Staff {


public:
	Paramedics();
	~Paramedics();
	void update();
};

#endif

#include "Cleaners.h"
#include <iostream>
using namespace std;

Cleaners::Cleaners():active(true){}//sets active to default true

void Cleaners::update() {
	cout<<"Cleaners are cleaning zone"<<endl;//idk if you guys wanna make different
}

bool Cleaners::getActive(){//returns current active value
	return active;
}

void Cleaners::setActive(bool active){//sets active to what is passed
	this->active = active;
}